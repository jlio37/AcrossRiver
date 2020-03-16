#include <iostream>
#include<string>
#include<cstdlib>
#include <ctime>
using namespace std;

int main() {
  
 //Declearing variables for answer
char answer;
//intro text
cout<<"----How to cross the River?----"<<endl;
cout<<"\n"<<endl;
//explaining game
cout<<"A farmer with a Fox, a Goose, and a sack of corns needs to cross the river. The farmer has  rowboat, but there is room for only the farmer and one of his three items.Unforturnately, both the fox and the goose are hungry. The fox cannot be left alone with the goose or the fox will eat the goose. Likewise, the goose cannot be left alone with the sack of corn, or the goose will eat the corn. how does the Farmer get everything across the rvier?\n"<<endl;
//displaying choices for user
choices1:
cout<<"Please select wich item will the farmer take first?\n"<<endl;
cout<<"a)take Fox"<<endl;
cout<<"b)take goose"<<endl;
cout<<"c)take sack of corn.\n"<<endl;
//taking choice and comparing to answers
cout<<"Type choice:  ";
cin>>answer;
cout<<"\n";
//validating answer

if (answer =='a' || answer == 'A' ){
  goto choiceSwitch;
}
else if(answer =='b' || answer == 'B' ){
goto choiceSwitch;
}
else if(answer =='c' || answer == 'C' ){
goto choiceSwitch;
}else {
  cout<<"---wrong answer--- \n"<<endl;
  cout<<".........\n"<<flush<<endl;
  goto choices1;
};

//breakingdown choices 
choiceSwitch:
switch (answer){
  case 'a':
  case 'A':
  cout<<"Fox was taken, goose and sack of corn alone. Goose eats sack of corn\n"<<endl;
  goto choices1;
  break;
  case 'b':
  case 'B':
  goto correct1;
  break;
 case 'c':
 case 'C':
 cout<<"Sack of corn was taken, fox and goose alone. FOX EATS GOOSE.\n"<<endl;
 goto choices1;
 break;
 
};
//if correct answer was chosen move to the next step of items
correct1:
//if correct answer was taken
if (answer == 'b' || answer =='B'){
  cout<<"you have taken the goose\n"<<endl;
}
//Step2 after right answer
char answer2;
cout<<"Goose was taken to the other side, now we have fox and sack of corn alone.\n"<<endl;
cout<<"Time to choose which item is next: \n"<<endl;
cout<<"\n"<<endl;
cout<<"next item to cross: "<<endl;
cout<<"a)take Fox"<<endl;
cout<<"b)kill goose"<<endl;
cout<<"c)take sack of corn"<<endl;
cout<<"d)leave them"<<endl;
cout<<"e)take fox and return with Goose."<<endl;
cout<<"f)take the sack of corn return with Goose."<<endl;
cout<<"g)kill fox"<<endl;
cout<<"h)empty sack of Corn pleace fox inside of it.\n"<<endl;
cout<<"\n";
cout<<"Second item to cross:  ";
cin>>answer2;

//Switch statement for second choice

validateasnwer2:
if (answer2 == 'a'|| answer2 == 'A'){
  goto choiceSwitch2;
}else if(answer2 == 'b'){
  goto choiceSwitch2;
}else if(answer2 == 'c'){
  goto choiceSwitch2;
}else if(answer2 =='d'|| answer2== 'D'){
  goto choiceSwitch2;
}else if(answer2 == 'e'|| answer2== 'E'){
  goto choiceSwitch2;
}else if(answer2== 'f' || answer2 =='F'){
  goto choiceSwitch2;
}else if (answer2 =='g'|| answer2=='G'){
  goto choiceSwitch2;
}else if (answer2 == 'h' || answer2=='H'){
  goto choiceSwitch2;
}else {
  cout<<"WRONG ANSWER"<<endl;
 goto choices1;
};

//Second Switch for STEP 2
choiceSwitch2:
 switch(answer2){
  case 'a':
  case 'A':
  cout<<"Fox was taken, goose and fox alone. FOX EATS GOOSE \n"<<endl;
  goto choices1;
  break;
  case'b':
  case 'B':
  goto NonsenseAnswer;
  break;
  case 'c':
  case 'C':
  cout<<"Take the sack of corn, Goose eats the corn\n"<<endl;
  break;
  case 'd':
  case 'D':
  goto NonsenseAnswer;
  break;
  case'e':
  case 'E':
  cout<<"take the fox and return with Goose."<<endl;
  break;
  case'f':
  case 'F':
  cout<<"Take the sack of corn and return with the goose."<<endl;
  break;
  case'g':
  case'G':
 goto NonsenseAnswer;
  break;
  case 'h':
  case 'H':
 goto NonsenseAnswer;
  break;

};


// if the answer are irrelavent or non sense

NonsenseAnswer:
if (answer2 == 'h' ){
cout<<"so, you decided to empty the sack of corn and place the fox inside of it."<<endl;
cout<<"now, you have no corn for the goose"<<endl;
  
}else if  (answer2 == 'g'){
  cout<<"KILL the FOX?"<<endl;
  cout<<"this makes no sense....."<<endl;
}else if(answer2 == 'd'){
  cout<<"leave them...it does no solve the issue ...not at all"<<endl;
}else if(answer2 == 'b'){
  cout<<"kill goose?..no Bueno!!"<<endl;
};
//Step 3, now that you have taken the fox and return with the goose.
if((answer == 'b' || answer =='B') && (answer2=='e' || answer2== 'E')){
cout<<"taken the fox place it there, pick up the goose and return with the goos to pick up the sack of corn. Leave the goose and pick up the sack of corn. "<<endl;

cout<<"now, you have the sack of corn & fox on one side and the goose in the other side. just take the goose and you have three items across the river";
cout<<"SOLVEd! Riddle SOLVE!!"<<endl;
}else{
  cout<<"WRonG";
  
};
return 0;
}

