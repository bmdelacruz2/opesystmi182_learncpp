#include <stdio.h>

   #include<iostream>
   #include<iomanip>
   using namespace std;
   int main()
   {
   int i,j;
   for(i = 1;i <= 10;++i)
   {


       for(j = 1;j <= 5;++j)
          cout<<setw(4)<<j*i;

       cout<<endl;


       for(j = 2;j <= 5;++j)

       cout<<endl;

   }
   return 0;
   }

