#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    if(s[8]=='A'){
    s.erase(8,9);
    // cout<<s.substr(0,2)<<endl;
    if(s.substr(0,2) == "12")
    	s.replace(0,2,"00");

    }
    else if(s[8]=='P'){
    if(s.substr(0,2) != "12"){


        std::string::size_type sz;
        int time = (s[0]-48)*10 + s[1]-48;
        char *p;
        // string temp = s[0]+s[1];
        // time = strtol(temp,&p,10); 
        // int time = stoi(s,1);
        time +=12;
        s.replace(0,2,to_string(time));
    }
        s.erase(8,9);
        s[2]=':';
    }

    
    return s;


}

int main()
{
    // ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";

    // fout.close();

    return 0;
}
