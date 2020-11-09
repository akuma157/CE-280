#include<iostream> /*input and output library*/
#include<string> /*string library*/
using namespace std; /*standard line analyze*/
main() /*Starting the program*/
{	/*You will enter your data first*/
	int UNID, cls, grade;/*reserving my integers that i'll use*/
	string firstname, surname, Dep;/*reserving my strings*/
	cout<<"Enter Your First Name: ";/*what will show on the program screen using cout<<*/cin>>firstname; /*what you'll write will be saved as a string using cin>>*/
	cout<<"Enter Your Sur Name: ";cin>>surname;
	cout<<"Enter Your Department: ";cin>>Dep;/*after seeing this message enter one of two strings A or T*/
	cout<<"Enter Your University ID: ";cin>>UNID;/*what you'll write will be saved as an integer*/
	cout<<"Enter Your Class: ";cin>>cls;/*choose 1st, 2nd, 3rd, 4th or 5th class by typing 1, 2, 3, 4, or 5*/
	cout<<"Enter Your Grade: ";cin>>grade;/*enter your grade between 0 and 100*/
 	cout<<"--------------------------------\n";/*a line just to split the input out of the output then end the line by using "\n"*/
 	cout<<"- Your Name: "<<firstname<<" "<<surname<<"\n";/*your name output*/
 	cout<<"- Your University ID: "<<UNID;/*your University ID output*/
 	cout<<"\n- Your Ranking: "; /*depending on your grade (100-90) shows A, (90-80) shows B, (80-70) shows C, (70-60) shows D, (60-0) shows F*/
 	if ((grade>=90)&&(grade<=100)) cout<<"A";
 	else if ((grade>=80)&&(grade<=89)) cout<<"B";
 	else if ((grade>=70)&&(grade<=79)) cout<<"C";
 	else if ((grade>=60)&&(grade<=69)) cout<<"D";
 	else if ((grade>=0)&&(grade<60)) cout<<"F";
 	else cout<<"Open the program again and enter the right values";/*typing something else it will not work*/
 	cout<<"\n- Your Department: ";
 	switch (cls) /*the class you insert as an integer will show up as one of the below strings using switch()*/
	{
		case 1:{cout<<"First Year";break;}/*1 means show First Year*/
		case 2:{cout<<"Second Year";break;}/*2 means show Second Year*/
		case 3:{cout<<"Third Year";break;}/*3 means show Third Year*/
		case 4:{cout<<"Fourth Year";break;}/*4 means show Fourth Year*/
		case 5:{cout<<"Fifth Year";break;}/*5 means show Fifth Year*/
		default :{cout<<"";break;}/*if you selected wrong number or anything else it will not work*/
	}
	/*what you've selected will be shown as a number of a certain year*/
 	if(Dep=="T") cout<<" Communication ";/*typing "T" shows "Communication"*/
 	else if(Dep=="A") cout<<" Control ";/*typing "A" shows "Control"*/
 	else cout<<"";/*typing something else than A or T will not show anything*/
 	/*the class and the department will show up together*/
	return 0;/*all the values should turn to 0*/
}
