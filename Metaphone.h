#ifndef METAPHONE_H
#define METAPHONE_H

#include <string>
#include <algorithm>
#include <initializer_list>
#include <regex>
#include <iostream>     // std::cout
#include <sstream>
#include <cctype>
#include <locale>

class Metaphone {

    protected:
        static const std::string THE_MATCH;
        static const std::string VOWEL;
        static const std::string NON_VOWEL;
        //virtual void prepare();
        //virtual void algorithm();
        //void translate(std::string pattern, std::string subst);

	private:
		std::string original;
		std::string transformed;
		//std::stringstream result;
		int currentPosition;
		bool bhadMatches;
		bool hadMatches();
		//std::string str_currentMatch;

		/*
		void calculate();
		bool isFullyProcessed();
		bool isNotFullyProcessed();
		void ignoreNoMatches();
		void translate();
		void consume();
		void ignore();
		void keep(std::string patterns);
		template <class T>
		std::string join(std::string separator, std::initializer_list<T> elements);
		std::string currentMatch();
		bool matches(std::string pattern, std::string s);
		void lookAhead(std::string pattern);
		void lookBehind(std::string pattern);
		std::string aheadString();
    std::string behindString();
    bool isBlank();
		void removeAccents();
		void removeMultiples(std::string... letters);
		void addSpaceToBorders();
		void allLowerCase();
        */
		void allUpperCase();
		
		void allLowerCase();
	public:
	  Metaphone(std::string string);
	  Metaphone();
	  std::string get_transformed(){allLowerCase(); return transformed; }

};

//const std::string Metaphone::THE_MATCH = "$0";
//const std::string Metaphone::VOWEL = "[aeiouy]";
//const std::string Metaphone::NON_VOWEL = "[^aeiouy]";

#endif
