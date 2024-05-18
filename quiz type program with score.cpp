#include<iostream>
#include<cmath>
using namespace std;
int main()
{

//Create a program with 5 questions and print out the overall score.

string tokyo, manila, beijing, seoul, bangkok;
float s1, s2, s3, s4, s5, score;

cout<<"What is the capital of Japan? ";
cin>>tokyo;

if (tokyo=="Tokyo" || tokyo=="TOKYO" || tokyo=="tokyo"){
    s1=1;
}
else{
    s1=0;
}

cout<<"What is the capital of Philippines? ";
cin>>manila;

if (manila=="Manila" || manila=="MANILA" || manila=="manila"){
    s2=1;
}
else{
    s2=0;
}

cout<<"What is the capital of China? ";
cin>>beijing;

if (beijing=="Beijing" || beijing=="BEIJING" || beijing=="beijing"){
    s3=1;
}
else{
    s3=0;
}

cout<<"What is the capital of Thailand? ";
cin>>bangkok;

if (bangkok=="Bangkok" || bangkok=="BANGKOK" || bangkok=="bangkok"){
    s4=1;
}
else{
    s4=0;
}

cout<<"What is the capital of Korea? ";
cin>>seoul;

if (seoul=="Seoul" || seoul=="SEOUL" || seoul=="seoul"){
    s5=1;
}
else{
    s5=0;
}

score=s1+s2+s3+s4+s5;

cout<<"\nThank you.\nYou got "<<score<<" out of 5 questions correct.";

return 0;
}

