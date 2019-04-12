#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace::std;

struct datanilai
{
string nhuruf;
double nil[3];
};


double inputan(string text)
{
double nilai;
cout<<" Masukan Nilai"<<text;cin>>nilai;
return nilai;
}

void grade(double nilai)
{

    if (nilai>100)cout<<"\n ERROR";
    else if (nilai>=81)cout<<"\n Nilai Grade: A";
    else if (nilai>=61)cout<<"\n Nilai Grade: B";
    else if (nilai>=41)cout<<"\n Nilai Grade: C";
    else if (nilai>=21)cout<<"\n Nilai Grade: D";
    else cout<<"\n Nilai Grade: E";


}



main()
{
cout<<"\n\n";

datanilai b;
double nilai;

b.nil[0]=inputan (" UTS\t: ");
b.nil[1]=inputan (" UAS\t: ");
b.nil[2]=inputan (" Tugas\t: ");
b.nil[3]=inputan (" Absen\t: ");
nilai=(b.nil[0]*0.20)+(b.nil[1]*0.30)+(b.nil[2]*0.35)+(b.nil[3]*0.15);
cout<<"\n Nilai Akhir: "<<nilai;
grade (nilai);



cout<<"\n\n\n";
return 0;
}

