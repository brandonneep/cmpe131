//============================================================================
// Name        : lab4annoyance.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <ctype.h>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;

bool IsWhiteSpace(char ch){
		if(ch ==' '||ch=='\t'||ch=='\n'||ch=='\r'){
			return true;
		}
		else{return false;}
	}

bool IsChar(char ch){
	if(('a'<=ch && ch<='z')||('A'<=ch && ch<='Z')){
		return true;
	}
	return false;
}

int main() {
//EX 1
		char input[100];
		int count= 0;
		int counter=0;
		int inlength;
		cout<<"enter input (max 100 characters):\n";
		cin.getline(input, 100,'.');
		inlength = strlen(input);
		for(int i=0;i<=inlength ;i++){

			if(IsWhiteSpace(input[i])== false && count == 0){
				//counter++;
				count = 1;
				char door;
				door=input[i];
				door=toupper(door);
				cout<<door;
				continue;
			}
			if(IsWhiteSpace(input[i])== true && count == 0){
				continue;
						}
			if(IsChar(input[i])==true && count ==1){
				counter++;
				char doot;
				doot=input[i];
				if(IsChar(doot)==true){
				doot=tolower(doot);
				}
				cout<<doot;
			}
			if(IsWhiteSpace(input[i])==true && IsChar(input[i-1])==true && i!= inlength-1){
				cout<<" ";
			}
			if(i == inlength-1){
			cout<<'.';
			}
			cout<<counter;
		return 0;
		}



//YUS! Got it.
/*input:noW  iS   thE    TiMe  fOr  aLl
        gOOD MEN TO  ComE TO   tHe
 		aId
oF


  ThE  CounTRY.


  output:Now is the time for all good men to come to the aid of the country.
*/








//Ex 2
/*	cout<<"Enter string to fix it.";
	string str;
	getline(cin, str);
	int len= str.length();
	//cout<<str;

	string word="";
		for(int i =0 ; i<len+1; i++){
					if (IsChar(str[i]))
					{
						//cout<<word;
						word = word +str[i] ;
						//cout<<word;
					}
					else{

						if(word=="him"){
							word= "her or him";
						}
						if(word=="he"){
							word="she or he";
						}
						if(word=="Him"){
							word= "Her or him";
						}
						if(word=="He"){
							word="She or he";
						}

						cout<<word;
						if(IsWhiteSpace(str[i])==true){
							cout<<" ";
						}
						if(str[i]==','){
							cout<<',';
						}
						if(str[i]==':'){
							cout<<':';
												}
						if(str[i]=='.'){
							cout<<'.';
												}
						if(str[i]==';'){
							cout<<';';
												}
						cin.putback(str[i]);
						word= "";
						continue;
					}
				}

	return 0;*/
	/*
	 * input: See an adviser, talk to him, and listen to him.
	 * output:See an adviser, talk to her or him, and listen to her or him.
	 */
}

