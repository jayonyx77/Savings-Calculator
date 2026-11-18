# include <iostream>

using namespace std;

int main ()

{  double WeekAmount;

   double NoWeeks;

   double YrRate;

   double Deposited;

   double Interest;

   double Total;

   cout<< "Input your WeekAmount :";

   cin>> WeekAmount;

   cout<< "Input NoWeeks :";

   cin>> NoWeeks;

   cout<< "Enter YrRate % :";

   cin>> YrRate;
   Deposited = WeekAmount * NoWeeks;
   Interest = Deposited * (YrRate/100) *(NoWeeks/52)/2;
   Total=Deposited + Interest;

   cout<<"You will put in : "<< Deposited <<endl;
   cout<<"Estimated interest : "<<Interest <<endl;
   cout<<"Estimated total : "<<Total<<endl;






return 0;
}
