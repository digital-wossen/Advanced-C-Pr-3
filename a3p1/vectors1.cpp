/*
    CH08-320143
    a3p1
    Wossen K Hailemariam
    w.hailemariam@jacobs-university.de
*/



#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{

    //cout<< "Using Vectors I"<<endl;
	//cout<< "Please enter the Words here"<<endl;

	vector<string> vec;
	string str;



	while(true)
	{

		cin >> str;
		
		if(str=="stop")// until stop is input
			break;
		vec.push_back(str);
		//inserting at the end of the vector

	}

	int n=vec.size();

	for(int i=0; i<n; ++i)
	{

		cout << vec[i];
		if(i!=n-1)
			cout << ",";//separated by a comma
			//not for the last one

	}

	cout << endl;

	for(vector<string>::iterator it=vec.begin(); it!=vec.end(); ++it)
		cout << *it << " ";//separated by a space
		//for the second output

	cout << endl;
	return 0;
}

//easy w.k
