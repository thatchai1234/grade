#include <iostream>
using namespace std;
int main()
{
    int s1,s2,s3 ,m,f;
	float  total,gt;
	cout<<("======================quizz=======================\n") ;
    cout<<("Enter score1(10)  :");
	cin>> s1;
	cout<<("Enter score2(10) :");
	cin>> s2;
	cout<<("Enter score3(10) :");
	cin>> s3;
	cout<<("Total = ") << (s1+s2+s3)/3; 
    cout<<("\n=====================Mid-terem==========================\n");
	cout<<("Enter you score midterm(45) : ");
	cin>> m ;
	cout<<("=====================Final===========================\n");
	cout<<("Enter you score Final(45) : ");
	cin>> f ;
	gt=(s1+s2+s3)/3;
	total = gt+m+f;
	cout<< ("Total  = ") << (gt+m+f) ;
	if (total >= 80)
    cout << ("\nyou are grade A\n") ;
	else if (total <=79 && total >=75)
	cout <<("\nyou are grade B+\n");
	else if (total <=74 && total >=70)
	cout <<("\nyou are grade B\n");
	else if (total <=69 && total >=65)
	cout <<("\nyou are grade C+\n");
	else if (total <=64 && total >=60)
	cout <<("\nyou are grade C\n");
	else if (total <=59 && total >=55)
	cout <<("\nyou are grade D+\n");
	else if (total <=54 && total >=50)
	cout <<("\nyou are grade D\n");
	else if (total <=49 )
	cout <<("\nyou are grade F\n");
	return(0);
}