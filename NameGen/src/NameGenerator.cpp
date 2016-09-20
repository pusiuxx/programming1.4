//============================================================================
// Name        : NameGenerator.cpp
// Author      : pusiuxx
// Version     : 0.1
// Copyright   :
// Description : Random names generator
//============================================================================

#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>

std::vector<std::string> namePrefix;
std::vector<std::string> nameMid;
std::vector<std::string> nameSuffix;
int i = 0;

void initData(){

	namePrefix.push_back("ix");
	namePrefix.push_back("tor");
	namePrefix.push_back("wex");
	namePrefix.push_back("voi");
	namePrefix.push_back("raz");
	namePrefix.push_back("azq");
	namePrefix.push_back("qwe");
	namePrefix.push_back("zz");
	namePrefix.push_back("aqr");

	nameMid.push_back("adur");
	nameMid.push_back("anim");
	nameMid.push_back("apoll");
	nameMid.push_back("iamp");
	nameMid.push_back("hann");
	nameMid.push_back("educ");
	nameMid.push_back("extr");

	nameSuffix.push_back("bon");
	nameSuffix.push_back("rop");
	nameSuffix.push_back("zan");
	nameSuffix.push_back("nom");
	nameSuffix.push_back("oza");
	nameSuffix.push_back("nowa");
	nameSuffix.push_back("por");
	nameSuffix.push_back("zow");

}
std::string GeneratePlayerName(){
	std::string playerName;
	playerName = namePrefix[rand() % namePrefix.size()] + nameMid[rand() % nameMid.size()] + nameSuffix[rand() % nameSuffix.size()];
	return playerName;
}
int main() {
	srand(time(NULL));
	initData();

	std::cout << "How many names you want generate?" << std::endl;
	std::cin >> i;

	while(i > 0){
	std::cout << GeneratePlayerName() << std::endl;
	i--;
	}
	return 0;
}
