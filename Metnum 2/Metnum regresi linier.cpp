#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
 float X[100];
 float Y[100];
 float data, totalX, totalY, totalXY, totalXkuadrat, kuadrattotalX;
 float m,c ;
 int i, ulang;
 printf("--- Program menghitung nilai regresi dengan format Y = mx+c ---\n");
 
 do
 {
    totalX=0, totalY=0, totalXY=0, totalXkuadrat=0;
    printf("\n");
 cout << "Masukkan nilai n : " ;
 cin >> data ;
 printf("\n");
 
 //input data
 for (i=0 ; i<data ; i++)
  {
   cout << "Masukkan nilai X-" << i+1 << " : " ;
   cin >> X[i];
   cout << "Masukkan nilai Y-" << i+1 << " : " ;
   cin >> Y[i];
   printf("\n");
  }
 
 // menghitung nilai m
  
  //menghitung nilai jumlah nilai XY
  for (i=0 ; i<data ; i++)
   totalXY=totalXY+(X[i]*Y[i]);
  
  //menghitung nilai jumlah X dan jumlah Y
  for (i=0 ; i<data ; i++)
   {
    totalX=totalX+X[i];
    totalY=totalY+Y[i];
   }
  
  //menghitung total X kuadrat
  for (i=0 ; i<data ; i++)
   totalXkuadrat=totalXkuadrat+(X[i]*X[i]);
  
  // menghitung kuadrat total X
  for (i=0 ; i<data ; i++)
   kuadrattotalX=totalX*totalX;
  
  //menghitung nilai m
  float m=((data*totalXY)-(totalX*totalY)) / ((data*totalXkuadrat)-(kuadrattotalX));
  
 //menghitung nilai c
  
  float c=((totalXkuadrat*totalY)-(totalX*totalXY)) / ((data*totalXkuadrat)-(kuadrattotalX));
   
 // menampilkan hasil persamaan regresi
  cout << "Persaamaan linear dari fungsi regresi di atas adalah Y = " << m  << "x" << setiosflags(ios::showpos) << c  << endl;
  
  getch();
    
    // fungsi mengulang program
    printf("\nIngin mengulang (Y/T) ?" );
	ulang=getch();
    }
	 while (ulang=='Y' || ulang=='y');
    
 return 0;
} 
