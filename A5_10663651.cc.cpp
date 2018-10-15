#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

string n_1,n_2,n_3,n_4,n_5, g_1,g_2,g_3,g_4,g_5, grade_1,grade_2,grade_3,grade_4,grade_5;  //n is name, g is gender

int i_1,i_2,i_3,i_4,i_5, s_1,s_2,s_3,s_4,s_5, a_1,a_2,a_3,a_4,a_5; //i is ID number, s is score, a is age

int x;

double average_age, average_score;

int male_count, female_count;

int main()
{   ofstream Quanoil;
    Quanoil.open ("Quanoil.txt");


    cout << "PLEASE ENTER THE NAMES OF THE FIVE STUDENTS" << endl;
    for(x=0; x<5; x++)
    {
            if(x==0)
        cin>>n_1;
            if(x==1)
        cin>>n_2;
            if(x==2)
        cin>>n_3;
            if(x==3)
        cin>>n_4;
            if(x==4)
        cin>>n_5;

    }

    cout << "PLEASE ENTER THE GENDERS OF THE FIVE STUDENTS RESPECTIVELY" << endl;
    for(x=0; x<5; x++)
    {
            if(x==0)
        cin>>g_1;
            if(x==1)
        cin>>g_2;
            if(x==2)
        cin>>g_3;
            if(x==3)
        cin>>g_4;
            if(x==4)
        cin>>g_5;

    }


    cout << "PLEASE ENTER THE ID NUMBERS OF THE FIVE STUDENTS RESPECTIVELY" << endl;
    for(x=0; x<5; x++)
    {
            if(x==0)
        cin>>i_1;
            if(x==1)
        cin>>i_2;
            if(x==2)
        cin>>i_3;
            if(x==3)
        cin>>i_4;
            if(x==4)
        cin>>i_5;

    }

    cout << "PLEASE ENTER THE SCORES OF THE FIVE STUDENTS RESPECTIVELY" << endl;
    for(x=0; x<5; x++)
    {
            if(x==0)
        cin>>s_1;
            if(x==1)
        cin>>s_2;
            if(x==2)
        cin>>s_3;
            if(x==3)
        cin>>s_4;
            if(x==4)
        cin>>s_5;

    }

    cout << "PLEASE ENTER THE GRADES OF THE FIVE STUDENTS RESPECTIVELY" << endl;
    for(x=0; x<5; x++)
    {
            if(x==0)
        cin>>grade_1;
            if(x==1)
        cin>>grade_2;
            if(x==2)
        cin>>grade_3;
            if(x==3)
        cin>>grade_4;
            if(x==4)
        cin>>grade_5;

    }

    cout << "PLEASE ENTER THE AGES OF THE FIVE STUDENTS RESPECTIVELY" << endl;
    for(x=0; x<5; x++)
    {
            if(x==0)
        cin>>a_1;
            if(x==1)
        cin>>a_2;
            if(x==2)
        cin>>a_3;
            if(x==3)
        cin>>a_4;
            if(x==4)
        cin>>a_5;

    }


    cout<<endl;

    Quanoil<<"ID"<<'\t'<<"NAME"<<'\t'<<"AGE"<<'\t'<<"GENDER"<<'\t'<<"SCORE"<<'\t'<<"GRADE"<<endl;
    Quanoil<<i_1<<'\t'<<n_1<<'\t'<<a_1<<'\t'<<g_1<<'\t'<<s_1<<'\t'<<grade_1<<endl;
    Quanoil<<i_2<<'\t'<<n_2<<'\t'<<a_2<<'\t'<<g_2<<'\t'<<s_2<<'\t'<<grade_2<<endl;
    Quanoil<<i_3<<'\t'<<n_3<<'\t'<<a_3<<'\t'<<g_3<<'\t'<<s_3<<'\t'<<grade_3<<endl;
    Quanoil<<i_4<<'\t'<<n_4<<'\t'<<a_4<<'\t'<<g_4<<'\t'<<s_4<<'\t'<<grade_4<<endl;
    Quanoil<<i_5<<'\t'<<n_5<<'\t'<<a_5<<'\t'<<g_5<<'\t'<<s_5<<'\t'<<grade_5<<endl;

    Quanoil<<endl;

    average_age = (a_1 + a_2 + a_3 + a_4 + a_5)/5;

    average_score = (s_1 + s_2 + s_3 + s_4 + s_5)/5;

    Quanoil<<endl;

    Quanoil.precision(5);
    Quanoil<<"THE AVERAGE AGE IS" <<average_age<<endl;

    Quanoil.precision(5);
    Quanoil<<"THE AVERAGE SCORE IS" <<average_score<<endl;

    Quanoil.close();
    return 0;
}
