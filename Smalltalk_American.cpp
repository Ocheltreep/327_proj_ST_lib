/*
 * Smalltalk_American.cpp
 *
 *  Created on: Apr 18, 2021
 *      Author: pjocheltree
 */

#include "./includes/constants.h"
#include "./includes/Smalltalk_American.h"

//this constructor should call the 2 parameter constructor below in it's initializer list
Smalltalk_American::Smalltalk_American(int iPerson):Smalltalk(AMERICAN, iPerson){
	populatePhrases();
}

//use base class constructor in initializer list to set Nationality and iPerson (See constants for Nationality strings)
//also prepare the object for use by calling populatePhrases()
Smalltalk_American::Smalltalk_American(std::string myNationality,int iPerson):Smalltalk(myNationality, iPerson){
	populatePhrases();
}

Smalltalk_American::~Smalltalk_American(){}

void Smalltalk_American::populatePhrases(){
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_1);
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_2);
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_3);
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_4);
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_5);
}

