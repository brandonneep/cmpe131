//============================================================================
// Name        : lab.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include <string>
using namespace std;



int main() {
	cout<<"choose option of input"<<endl;
	cout<<"1)input manually (through console)"<<endl;
	cout<<"2)input by file"<<endl;
	int option1;
	cin>>option1;


	//manual option 1 (*********************

	if(option1==1)
	{
		cout<<"enter number of rows in the plane";
		int rows=0;
		char *colA;
		char *colD;
		char *colC;
		char *colB;
		cin>> rows;
		colA= new char[rows];
		colB= new char[rows];
		colC= new char[rows];
		colD= new char[rows];
		//set default
		for(int i =0; i<rows; i++)
		{
			colA[i]='A';
			colB[i]='B';
			colC[i]='C';
			colD[i]='D';
		}



		bool boop = true;
		while(boop== true)
		{
			int counter=1;
			for(int i = 0; i<rows; i++)
					{
						cout<<counter<<" "<< colA[i]<<" "<< colB[i]<< " "<<colC[i]<<" "<<colD[i]<<endl;
						counter++;
					}

			cout<<"what row would you like?"<<endl;
			int row;
			cin>>row;
			cout<<"what column would you like?"<<endl;
			char column;
			cin>>column;
			//failsafe
			if((column!= 'A' && column!= 'B' && column!= 'C' && column!= 'D' )|| row  >rows)
			{
				cout<<"invalid coordinates, try again (letters must be capitalized)"<<endl;
				continue;

			}
			if(column== 'A'){
					if(colA[row-1]=='X'){
						cout<<"that spot has already been taken, try another seat"<<endl;
						continue;
					}
			}
			if(column== 'B'){
								if(colB[row-1]=='X'){
									cout<<"that spot has already been taken, try another seat"<<endl;
									continue;
								}
						}
			if(column== 'C'){
								if(colC[row-1]=='X'){
									cout<<"that spot has already been taken, try another seat"<<endl;
									continue;
								}
						}
			if(column== 'D'){
								if(colD[row-1]=='X'){
									cout<<"that spot has already been taken, try another seat"<<endl;
									continue;
								}
						}
			//continue


				bool doot = true;
				while(doot ==true)
				{
				cout<<"you have now taken seat: "<<row<<column<<endl;
				// assigns rowXcolX as occupied****************

				if(column=='A')
				{

					colA[row-1]='X';

					}

				if(column=='B')
				{
					colB[row-1]= 'X';


				}
				if(column=='C')
				{
					colC[row-1]= 'X';

				}
				if(column=='D')
				{
					colD[row-1]= 'X';

				}
				//***************************************
				int woop= 4*rows;
				int x=0;
				for(int i=0; i<rows; i++){
					if(colA[i]=='X'){
						x++;
					}
					if(colB[i]=='X'){
						x++;
					}
					if(colC[i]=='X'){
						x++;
					}
					if(colD[i]=='X'){
						x++;
					}
				}
				cout<<"there are "<<woop-x<<" seats left,"<<endl;
				if(x==woop){
					cout<<"with no more seats, you cannot select another, shutting down"<<endl;
					doot=false;
					boop = false;
					delete [] colA;
					delete [] colB;
					delete [] colC;
					delete [] colD;

					continue;
				}
				cout<<"would you like another seat? (Y/N)"<<endl;
				char dunno;
				cin>>dunno;
					if(dunno == 'N')
					{
						doot = false;
						boop = false;
						delete [] colA;
						delete [] colB;
						delete [] colC;
						delete [] colD;

					}


					if(dunno == 'Y')
						{

						doot = false;
						}


					{
					if(dunno!= 'N' && dunno!= 'Y')
					{
						cout<<"Y or N...."<<endl;
					}
					}
				}

		}
		}




//**************************************
	if(option1==2)
	{
//infile option 2 **********************

		ifstream in;
		cout<<"enter file name: ";
		char file[20];
		cin>>file;
		in.open(file);
		string line;
		if (in.is_open())
		{
			while(getline(in, line)){
				//cout<<line<<endl;
			}
			in.close();
		}

		int rows;
		rows= line[0]-'0';

		char *colA;
		char *colD;
		char *colC;
		char *colB;
		colA= new char[rows];
		colB= new char[rows];
		colC= new char[rows];
		colD= new char[rows];
		for(int x = 0 ; x<line.length(); x++){
			if(line[x]==' '){
				line[x]=NULL;
			}
		}



		for(int j=1; j<=line[0]-'0'; j++){
			//cout<<j<<" ";
		for(int i=1; i<line.length(); i++){

				if(line[i]==j+'0'){
					//cout<<line[i+1]<< " ";
					if(line[i+1]== 'D'){
						//cout<<endl;
										}
					if(line[i+1]=='A'){
						colA[j-1]='A';
					}
					if(line[i+1]=='B'){
						colB[j-1]='B';
												}
					if(line[i+1]=='C'){
						colC[j-1]='C';
												}
					if(line[i+1]=='D'){
						colD[j-1]='D';
												}
								}

												}

										}

		bool boop = true;
		while(boop== true)
		{
			int counter=1;
			for(int i = 0; i<rows; i++)
					{
						cout<<counter<<" "<< colA[i]<<" "<< colB[i]<< " "<<colC[i]<<" "<<colD[i]<<endl;
						counter++;
					}

			cout<<"what row would you like?"<<endl;
			int row;
			cin>>row;
			cout<<"what column would you like?"<<endl;
			char column;
			cin>>column;
			//failsafe
			if((column!= 'A' && column!= 'B' && column!= 'C' && column!= 'D' )|| row  >rows)
			{
				cout<<"invalid coordinates, try again (letters must be capitalized)"<<endl;
				continue;

			}
			if(column== 'A'){
					if(colA[row-1]=='X'){
						cout<<"that spot has already been taken, try another seat"<<endl;
						continue;
					}
			}
			if(column== 'B'){
								if(colB[row-1]=='X'){
									cout<<"that spot has already been taken, try another seat"<<endl;
									continue;
								}
						}
			if(column== 'C'){
								if(colC[row-1]=='X'){
									cout<<"that spot has already been taken, try another seat"<<endl;
									continue;
								}
						}
			if(column== 'D'){
								if(colD[row-1]=='X'){
									cout<<"that spot has already been taken, try another seat"<<endl;
									continue;
								}
						}
			//continue


				bool doot = true;
				while(doot ==true)
				{
				cout<<"you have now taken seat: "<<row<<column<<endl;
				// assigns rowXcolX as occupied****************

				if(column=='A')
				{

					colA[row-1]='X';

					}

				if(column=='B')
				{
					colB[row-1]= 'X';


				}
				if(column=='C')
				{
					colC[row-1]= 'X';

				}
				if(column=='D')
				{
					colD[row-1]= 'X';

				}
				//***************************************
				int woop= 4*rows;
				int x=0;
				for(int i=0; i<rows; i++){
					if(colA[i]=='X'){
						x++;
					}
					if(colB[i]=='X'){
						x++;
					}
					if(colC[i]=='X'){
						x++;
					}
					if(colD[i]=='X'){
						x++;
					}
				}
				cout<<"there are "<<woop-x<<" seats left,"<<endl;
				if(x==woop){
					cout<<"with no more seats, you cannot select another, shutting down"<<endl;
					doot=false;
					boop = false;
					delete [] colA;
					delete [] colB;
					delete [] colC;
					delete [] colD;

					continue;
				}
				cout<<"would you like another seat? (Y/N)"<<endl;
				char dunno;
				cin>>dunno;
					if(dunno == 'N')
					{
						doot = false;
						boop = false;
						delete [] colA;
						delete [] colB;
						delete [] colC;
						delete [] colD;

					}


					if(dunno == 'Y')
						{

						doot = false;
						}


					{
					if(dunno!= 'N' && dunno!= 'Y')
					{
						cout<<"Y or N...."<<endl;
					}
					}
				}

		}





	}
// **************************************







	return 0;
}
