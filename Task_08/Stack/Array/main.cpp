#include <bits/stdc++.h>
#include "stacktype.h"
#include "stacktype.cpp"
using namespace std;

int main(){

    //Task-1
    StackType<int> stk;
    StackType<int> tmp;

    (stk.IsEmpty())? cout<<"Stack is Empty\n" : cout<<"Stack is not Empty\n";

    stk.Push(5);
    stk.Push(7);
    stk.Push(4);
    stk.Push(2);

    (stk.IsEmpty())? cout<<"Stack is Empty\n" : cout<<"Stack is not Empty\n";

    (stk.IsFull())? cout<<"Stack is Full\n" : cout<<"Stack is not Full\n";

    while(!stk.IsEmpty()){
        tmp.Push(stk.Top());
        stk.Pop();
    }
    while(!tmp.IsEmpty()){
        cout<<tmp.Top()<<" ";
        stk.Push(tmp.Top());
        tmp.Pop();
    }
    cout<<"\n";

    stk.Push(3);

    while(!stk.IsEmpty()){
        tmp.Push(stk.Top());
        stk.Pop();
    }
    while(!tmp.IsEmpty()){
        cout<<tmp.Top()<<" ";
        stk.Push(tmp.Top());
        tmp.Pop();
    }
    cout<<"\n";


    (stk.IsFull())? cout<<"Stack is Full\n" : cout<<"Stack is not Full\n";

    stk.Pop();
    stk.Pop();

    cout<<stk.Top()<<"\n";


    //Task-2
    string s;
    cin>>s;

    StackType<char> stak;
    int i, fcou=0, bcou=0;
    for(int i=0; i<s.length(); ++i){
        if(s[i]=='(') ++fcou;
        else ++bcou;
    }
    for(i=0; i<s.length(); ++i){
        try{
            if(s[i]=='('){
                stak.Push(s[i]);
            }else{
                if(!stak.IsEmpty())
                    stak.Pop();
            }
        }catch(EmptyStack){
            cout<<"Not Balanced\n";
            break;
        }
    }
    (stak.IsEmpty() && fcou == bcou)? cout<<"Balanced\n": cout<<"Not Balanced\n";
}
