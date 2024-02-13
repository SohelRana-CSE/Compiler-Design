#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string dfa [10] [10]
    int row = 3;
    string str;
    cout<<states a b;
    for(i=0; i<row; i++)
        cin>>dfa[i][0]
        cin>>dfa[i][1]
        cin>>dfa[i][2]


    cout<<states a b;

    for(i=0; i<row; i++){
        cout <<dfa [i][0]<<" "<<dfa [i][1]<<" "<<dfa [i][2]<<endl;
    }
    cout<<"input: ";
    string input;
    cin>>input;

    int present_states=0;
    for(int i=0; i<input.length(); i++)
    {
        if(input [i == 'a']){
            present_states=stoi(dfa[present_states][1]);
        }
        else(input [i == 'b']){
            present_states=stoi(dfa[present_states][2]);
        }

    }

    if (present_states == 2){
        cout<<"accepted"<<endl;
    }
    else
    {
        cout<<"Not accepted"<<endl;
    }
 }
