#include "Metaphone.h"

Metaphone::Metaphone(std::string str) {
  original = str;
  transformed = str;
  currentPosition = 0;
  bhadMatches = false;
}

Metaphone::Metaphone() {
  currentPosition = 0;
  bhadMatches = false;
}

const std::string Metaphone::THE_MATCH = "$0";
const std::string Metaphone::VOWEL = "[aeiouy]";
const std::string Metaphone::NON_VOWEL = "[^aeiouy]";


void Metaphone::allLowerCase() {
  std::transform(transformed.begin(), transformed.end(), transformed.begin(), ::tolower);
}


void Metaphone::allUpperCase() {
  std::transform(transformed.begin(), transformed.end(), transformed.begin(), ::tolower);

}

bool Metaphone::hadMatches() {
	return bhadMatches;
}
/*
void Metaphone::calculate() {
        if (isBlank()) return;

        allLowerCase();
        removeAccents();
        prepare();
        addSpaceToBorders();

        while (isNotFullyProcessed()) {
            keep(" ");
            algorithm();
            ignoreNoMatches();
        }
}



bool Metaphone::isFullyProcessed() {
    return currentPosition >= transformed.length();
}

bool Metaphone::isNotFullyProcessed() {
    return !isFullyProcessed();
}

void Metaphone::ignoreNoMatches() {
	if (!hadMatches()) {
		currentPosition += 1;
	}
	bhadMatches = false;
}

void Metaphone::translate(std::string pattern, std::string subst) {
	if (isFullyProcessed() || hadMatches()) return;

	if (std::regex_match(pattern, ".+\\(.*")) {
		lookBehind(pattern.substr(0, pattern.find_first_of("(")));
		if (hadMatches()) lookAhead(pattern.substr(pattern.find_first_of("(")));
	} else {
		lookAhead(pattern);
	}

	if (!hadMatches()) return;

	subst = THE_MATCH.compare(subst) ? currentMatch() : subst;
	consume(currentMatch());
	result << allUpperCase(subst);
}

void Metaphone::consume(std::string match) {
	currentPosition += match.length();
}

void Metaphone::ignore(std::string pattern) {
	translate(pattern, "");
}

void Metaphone::keep(std::string... patterns) {
	translate("(" + join("|", patterns) + ")", THE_MATCH);
}

template <class T>
std::string Metaphone::join(std::string separator, std::initializer_list<T> elements) {
	if (elements == NULL) return "";
	if (elements.size() == 0) return "";
	if (elements.size() == 1) return elements[0];

	StringBuilder result = new StringBuilder();
	result.append(elements[0]);
	for (int i = 1; i < elements.length; i++) {
		result.append(separator);
		result.append(elements[i]);
	}
	return result.toString();
}

bool Metaphone::hadMatches() {
	return bhadMatches;
}

std::string Metaphone::currentMatch() {
	return currentMatch;
}

bool Metaphone::matches(std::string pattern, std::string s) {
	Matcher matcher = compile(pattern).matcher(s);
	bhadMatches = matcher.find();

	if (hadMatches()) {
		currentMatch = matcher.groupCount() > 0 ? matcher.group(1) : matcher.group();
	}

	return hadMatches();
}

void Metaphone::lookAhead(std::string pattern) {
	matches("^" + pattern, aheadString());
}

void Metaphone::lookBehind(std::string pattern) {
	matches(pattern + "$", behindString());
}

std::string Metaphone::aheadString() {
	return transformed.substring(currentPosition);
}

std::string Metaphone::behindString() {
	return transformed.substring(0, currentPosition);
}

bool Metaphone::isBlank() {
	return transformed == null || transformed.isEmpty();
}

void Metaphone::removeAccents() {
	Map<Pattern, std::string> substs = new HashMap<Pattern, std::string>();
	substs.put(compile("[âãáàäÂÃÁÀÄ]"), "a");
	substs.put(compile("[éèêëÉÈÊË]"), "e");
	substs.put(compile("[íìîïÍÌÎÏ]"), "i");
	substs.put(compile("[óòôõöÓÒÔÕÖ]"), "o");
	substs.put(compile("[úùûüÚÙÛÜ]"), "u");

	for (Entry<Pattern, std::string> subst : substs.entrySet()) {
		Pattern accents = subst.getKey();
		std::string noAccent = subst.getValue();
		transformed = accents.matcher(transformed).replaceAll(noAccent);
	}
}

void Metaphone::removeMultiples(std::string... letters) {
	for (std::string letter : letters) {
		Matcher matcher = compile(letter + letter + "+", CASE_INSENSITIVE).matcher(transformed);
		transformed = matcher.replaceAll(letter);
	}
}

void Metaphone::addSpaceToBorders() {
	transformed = " " + transformed + " ";
}
*/
