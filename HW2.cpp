#include<iostream>

using namespace std;

int main(){
 
    //Write a C++program to find maximum between two numbers.
    int a, b;
    cout<<"Enter two integer numbers: ";
    cin>>a>>b;
    if(a>b){
        cout<<"Maximum number is= "<<a;
    }else{
        cout<<"Maximum number is= "<<b;
    }
  
    //Write a C++program to find maximum between three numbers.
    int c, d, e;
    cout<<"Enter three integer numbers: ";
    cin>>c>>d>>e;
    
    if (c>d && c>e){
        cout<<"Maximum number is= "<<c;
    }
    if (d>c && d>e){
            cout<<"Maximum number is= "<<d;
        }
    if (e>c && e>d){
        cout<<"Maximum number is= "<<e;
    }
    
    //Write a C++program to check whether a number is negative, positive or zero.
    int f;
    cout<<"Enter an integer: ";
    cin>>f;
    
    if (f>0){
        cout<<"this number is possitive";
    }else if (f<0){
        cout<<"this number is negative number";
    }else if (f==0){
        cout<<"this number is equal to zero";
        
    }
     //Write a C++program to check whether a number is divisible by 5 and 11 or not.
    int g;
    cout<<"Enter an integer: ";
    cin>>g;
    
    if (g%5==0 && g%11==0){
        cout<<g<<" is divisible for both 5 and 11";
    }else{
        cout<<g<<" is not divisible for both 5 and 11";
    }
    //Write a C++program to check whether a number is even or odd.
    int h;
    cout<<"Enter an integer: ";
    cin>>h;
    
    if (h%2==0){
        cout<<h<<" is an even number";
    }else{
        cout<<h<<" is an odd number";
    }
    //Write a C++program to check whether a year is leap year or not.
    int i;
    cout<<"Enter a year: ";
    cin>>i;
    
    if (i%4==0){
        cout<<i<<" is a common year";
    }else if (i%100==0){
        cout<<i<<" is a leap year";
    }else if (i%400==0){
        cout<<i<<" is a common year";
    }else{
        cout<<i<<" is a leap year";
    }
    //Write a C++program to check whether a character is alphabet or not.
    char j;
    cout<<"Enter any charachter: ";
    cin>>j;
    if ((j >= 'a' && j <='z' ) || (j >= 'A' && j <='Z' )){
        cout<<j<<" is an alphabet";
    }else{
        cout<<j<<" is not an alphabet";
    }
    //Write a C++program to input any alphabet and check whether it is vowel or consonant.
    char k;
    cout<<"Enter any charachter: ";
    cin>>k;
    if ((k == 'a' || k == 'e' || k == 'i' || k =='o' || k=='u' || k=='y' ) || (k == 'A' || k == 'E' || k == 'I' || k =='O' || k=='U' || k=='Y')){
           cout<<k<<" is a vowel";
    }else{
        cout<<k<<" is a consonants";
    }
    //Write a C++program to input any character and check whether it is alphabet, digit or special character.
    char l;
       cout<<"Enter any character: ";
       cin>>l;

       if((l >= 'a' && l <= 'z') || (l >= 'A' && l <= 'Z'))
       {
           cout<<l<< " is an alphabet";
       }
       else if(l >= '0' && l <= '9')
       {
           cout<<l<< " is a digit";
       }
       else
       {
           cout<<l<< " is a special character";
       }

    //Write a C++program to check whether a character is uppercase or lowercase alphabet.
    char m;
       cout<<"Enter a character: ";
       cin>>m;

    if(m >= 'a' && m <= 'z'){
        cout<<m<<" is a lowercase alphabet";
    }
    if(m >= 'A' && m <= 'Z'){
        cout<<m<<" is an uppercase alphabet";
       }
    //Write a C++program to input week number and print week day.
    int n;
       cout<<"Enter a week number (1-7): ";
       cin>>n;
    if (n==1){
        cout<<"Monday";
    }else if (n==2){
        cout<<"Tuesday";
    }else if (n==3){
        cout<<"Wednesday";
    }else if (n==4){
        cout<<"Thursday";
    }else if (n==5){
        cout<<"Friday";
    }else if (n==6){
        cout<<"Saturday";
    }else if (n==7){
        cout<<"Sunday";
    }else{
        cout<<"Invalid Input! Please enter week in between 1-7.";
    }
    //Write a C++program to input month number and print number of days in that month.
    int o;
       cout<<"Enter month number (1-12): ";
       cin>>o;
       if(o==1){
           cout<<"January"<<endl;
           cout<<"January has 31 days";
       }else if(o==2){
           cout<<"February"<<endl;
           cout <<"February has 28 or 29 days";
       }else if(o==3){
           cout<<"March"<<endl;
           cout <<"March has 31 days";
       }else if(o==4){
           cout<<"April"<<endl;
           cout <<"April has 30 days";
       }else if(o==5){
           cout<<"May"<<endl;
           cout <<"May has  31 days";
       }else if(o==6){
           cout<<"June"<<endl;
           cout <<"June has 30 days";
       }else if(o==7){
           cout<<"July"<<endl;
           cout <<"July has 31 days";
       }else if(o==8){
           cout<<"August"<<endl;
           cout <<"August has 31 days";
       }else if(o==9){
           cout<<"September"<<endl;
           cout <<"September has 30 days";
       }else if(o==10){
           cout<<"October"<<endl;
           cout <<"October has 31 days";
       }else if(o==11){
           cout<<"November"<<endl;
           cout <<"November has  30 days";
       }else if(o==12){
           cout<<"December"<<endl;
           cout <<"December has 31 days";
       }else{
           cout<< "Invalid input! Please enter month number between (1-12).";
       }
    //Write a C++program to count total number of notes in given amount.
    int p;
    int note100, note50, note20, note10, note5, note1;
    note100 = note50 = note20 = note10 = note5 = note1 = 0;

        cout<<"Enter amount: ";
        cin>>p;

        if(p >= 100){
            note100 = p/100;
            p -= note100 * 100;
        }
        if(p >= 50){
            note50 = p/50;
            p -= note50 * 50;
        }
        if(p >= 20){
            note20 = p/20;
            p -= note20 * 20;
        }
        if(p >= 10){
            note10 = p/10;
            p -= note10 * 10;
        }
        if(p >= 5){
            note5 = p/5;
            p -= note5 * 5;
        }
        if(p >= 1){
            note1 = p/1;
            p -= note5 * 1;
        }
    cout<<"Total number of notes = "<<endl;
        cout << "100 = " << note100 <<endl;
        cout << "50 = " << note50 <<endl;
        cout << "20 = " << note20 <<endl;
        cout << "10 = " << note10 <<endl;
        cout << "5 = " << note5 <<endl;
        cout << "1 = " << note1 <<endl;
    
    //Write a C++program to input angles of a triangle and check whether triangle is valid or not.
    int q,r,s;
     cout<<"Enter three angle of a triangle"<<endl;
     cin>>q>>r>>s;
     int sum=q+r+s;
     if(sum==180 && q!=0 && r!=0 && s!=0){
     cout<<"the triangle is valid";
    }else{
    cout<<"the triangle is not valid";
    }
    //Write a C++program to input all sides of a triangle and check whether triangle is valid or not.
    int t,u,v;
    cout<<"Enter three sides of a triangle: ";
    cin>>t>>u>>v;
    
    if (t + u <= v || t + v<= u || u + v <= t){
            cout << "Valid";
    }else{
            cout << "Invalid";
    }
    //Write a C++program to check whether the triangle is equilateral, isosceles or scalene triangle.
    int x, y, z;
    cout<<"Enter three sides of a triangle: ";
    cin>>x>>y>>z;
    if(x == y && y == z){
            cout << "Equilateral Triangle";
    }else if (x == y || y == z || z == x){
            cout << "Isoceles Triangle";
    }else{
            cout << "Scalene Triangle";
    }
    //Write a C++program to calculate profit or loss
    int w, ab;
    cout<<"Please, enter how much money you had in the monrning: ";
    cin>>w;
    cout<<"Please, enter how much money you had in the night: ";
    cin>>ab;
    
    if(w<ab){
        cout<<"Congrats! you have made a profit";
    }else if(w>ab){
        cout<<"Sorry you have lost some money";
    }else if(w=ab){
        cout<<"You don't have profit nor lost";

    }
      //Write a C++program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
    double marks;
        cout<<"Enter marks of Physics: ";
        cin>>marks;
         if(marks>=90){
        cout<<"Grade=A"<<endl;
        }else if(marks>=80){
        cout<<"Grade=B"<<endl;
        }else if(marks>=70){
        cout<<"Grade=C"<<endl;
        }else if(marks>=60){
        cout<<"Grade=D"<<endl;
        }else if(marks>=40){
        cout<<"Grade=F"<<endl;
        }
        cout<<"Enter marks of Chemistry: ";
        cin>>marks;
         if(marks>=90){
        cout<<"Grade=A"<<endl;
        }else if(marks>=80){
        cout<<"Grade=B"<<endl;
        }else if(marks>=70){
        cout<<"Grade=C"<<endl;
        }else if(marks>=60){
        cout<<"Grade=D"<<endl;
        }else if(marks>=40){
        cout<<"Grade=F"<<endl;
        }
        cout<<"Enter marks of Biology: ";
        cin>>marks;
         if(marks>=90){
        cout<<"Grade=A"<<endl;
        }else if(marks>=80){
        cout<<"Grade=B"<<endl;
        }else if(marks>=70){
        cout<<"Grade=C"<<endl;
        }else if(marks>=60){
        cout<<"Grade=D"<<endl;
        }else if(marks>=40){
        cout<<"Grade=F"<<endl;
        }
        cout<<"Enter marks of Mathematics: ";
        cin>>marks;
         if(marks>=90){
        cout<<"Grade=A"<<endl;
        }else if(marks>=80){
        cout<<"Grade=B"<<endl;
        }else if(marks>=70){
        cout<<"Grade=C"<<endl;
        }else if(marks>=60){
        cout<<"Grade=D"<<endl;
        }else if(marks>=40){
        cout<<"Grade=F"<<endl;
        }
        cout<<"Enter marks of Computer: ";
        cin>>marks;
       if(marks>=90){
        cout<<"Grade=A"<<endl;
        }else if(marks>=80){
        cout<<"Grade=B"<<endl;
        }else if(marks>=70){
        cout<<"Grade=C"<<endl;
        }else if(marks>=60){
        cout<<"Grade=D"<<endl;
        }else if(marks>=40){
        cout<<"Grade=F"<<endl;
        }
    //Write a C++program to input electricity unit charges and calculate total electricity bill according to the given condition:
    int unit;
        /*1 - 100 unit - 5/=
          101-200 unit -  7/=
          201-300 unit - 10/=
          above 300  - 15/=*/
          
    cout<<"Enter the unit of usage: ";
          cin>>unit;
          
    if(unit<=100){
                cout<<"Bill amount is: ";
        cout<<unit*5;
    }else if(unit<=200){
            cout<<"Bill amount is: ";
        cout<<(100*5)+(unit-100)*7;
    }else if(unit<=300){
        cout<<"Bill amount is: ";
        cout<<(100*5)+(100*7)+(unit-200)*10;
    }else if(unit>300){
        cout<<"Bill amount is: ";
        cout<<(100*5)+(100*7)+(100*10)+(unit-300)*15;
    }else{
        cout<<"Bill amount is: ";
        cout<<"No value";
    }

    return 0;
}

