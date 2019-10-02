#include <bits/stdc++.h>

using namespace std;
string s;
char c;

int main(int argc, char *argv[])
{
    fstream tcl_file;

    tcl_file.open(argv[1]);
    if (tcl_file.is_open()){
        cout<<"Finding the maximum node number for "<<argv[1]<<endl;
        int max_node=0;
        while (tcl_file>>s)
        {
            //cout<<s<<endl;
            if(s.length()>7){
                size_t found= s.substr(0, 7).find("node");
                if(found != string::npos){
                    size_t pos_1 =s.find("(");
                    size_t pos_2 = s.find(")");
                   // cout<<s.substr(pos_1+1,pos_2)<<endl;
                    max_node = max(max_node, stoi(s.substr(pos_1 + 1, pos_2 - 1)));
                }
            }
        }
        cout<<"The maximum node found is "<<max_node<<endl; 
        tcl_file.close();
    }else{
        cout<<"File CANNOT be opened."<<endl;
    }
    return 0;
}