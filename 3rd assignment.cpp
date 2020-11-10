#include<iostream> /*input and output library*/
#include<string> /*string library*/
using namespace std; /*standard line analyze*/
int UNID, cls, grade, sum, x, avg;/*reserving my integers that i'll use*/
string firstname, surname, Dep, con;/*reserving my strings*/
class AhmedsClass{
	public:
		insert(){
		int i=1; /*the loop i*/
		cout<<"Enter Your First Name: ";/*what will show on the program screen using cout<<*/cin>>firstname; /*what you'll write will be saved as a string using cin>>*/
		cout<<"Enter Your Sur Name: ";cin>>surname;
		cout<<"Enter Your Department(T, A or C): ";cin>>Dep;/*after seeing this message enter one of strings T, A or C*/
		cout<<"Enter Your University ID: ";cin>>UNID;/*type only integers*/
		cout<<"Enter Your Class(A Number From 1 to 5): ";cin>>cls;/*choose 1st, 2nd, 3rd, 4th or 5th class by typing 1, 2, 3, 4, or 5*/
		//cout<<"Enter Your Grade: ";cin>>grade;/*enter your grade between 0 and 100*/
		while (i<=8)
				{
					cout<<"Enter Your Mark No.";cout<<i;cout<<" : ";cin>>grade; /*enter your marks between 0 and 100 one by one*/
					sum=sum+grade; /*this will sum the marks values*/
					i=i+1;
				}
		avg=sum/8;
	}
		print(){
			cout<<"--------------------------------\n";/*a line just to split the input out of the output then end the line by using "\n"*/
		 	cout<<"- Your Name: "<<firstname<<" "<<surname<<"\n";/*your name output*/
		 	cout<<"- Your University ID: "<<UNID;/*your University ID output*/
		 	cout<<"\n- The Average is: "<<avg; /*The Average output*/
		 	cout<<"\n- Your Ranking: "; /*depending on your sum (100-90) shows A, (90-80) shows B, (80-70) shows C, (70-60) shows D, (60-0) shows F*/
			if ((avg>=90)&&(avg<=100)) cout<<"A";
		 	else if ((avg>=80)&&(avg<=89)) cout<<"B";
		 	else if ((avg>=70)&&(avg<=79)) cout<<"C";
		 	else if ((avg>=60)&&(avg<=69)) cout<<"D";
		 	else if ((avg>=0)&&(avg<60)) cout<<"F";
		 	else cout<<"Open the program again and enter the right values";/*typing something else it will not work*/
		 	cout<<"\n- Your Department: "; /*your Department output*/
		 	switch (cls) /*the class you insert as an integer will show up as one of the below strings using switch()*/
			{
				case 1:{cout<<"First Year";break;}/*1 means show First Year*/
				case 2:{cout<<"Second Year";break;}/*2 means show Second Year*/
				case 3:{cout<<"Third Year";break;}/*3 means show Third Year*/
				case 4:{cout<<"Fourth Year";break;}/*4 means show Fourth Year*/
				case 5:{cout<<"Fifth Year";break;}/*5 means show Fifth Year*/
				default :{cout<<"";break;}/*if you selected wrong number or anything else it will not work*/
			}
			/*what you've selected (integers from 1 to 5) will be shown as on of the outputs above*/
		 	if(Dep=="T") cout<<" Communication ";/*typing "T" shows "Communication"*/
		 	else if(Dep=="A") cout<<" Control ";/*typing "A" shows "Control"*/
		 	else if(Dep=="C") cout<<" Computer ";/*typing "A" shows "Computer"*/
			else cout<<"";/*typing something else than A, T or C (only in CAPS) will not show anything*/
			/*the class and the department will show up together*/
			

		}
};

main() /*Starting the program*/
{
	do{
	x=x+1;
	AhmedsClass AhmedsObject;
	AhmedsObject.insert();
	AhmedsObject.print();
	sum=0;
	cout<<"\n--------------------------------\n";
	cout<<"Enter Anything to Continue.\nEnter 'Exit' to Exit.\n";cin>>con;
	if (con=="Exit")
	break; /*if you typed "Exit" the program will break*/
	}
	while (x<=10);
	return 0;
}
