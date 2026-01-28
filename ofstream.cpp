#include<iostream>
using namespace std;

#include<fstream>


//-------------------------------------------------------------------------
/*
| Mode          | Meaning                    | When to use                |
| ------------- | -------------------------- | -------------------------- |
| `ios::out`    | Open for writing (default) | Normal file write          |
| `ios::app`    | Append mode                | Logs, audit trails         |
| `ios::trunc`  | Truncate file              | Overwrite old content      |
| `ios::ate`    | Start at end (can seek)    | Modify file end            |
| `ios::binary` | Binary mode                | Images, firmware, raw data |
| `ios::in`     | Read mode                  | Rare with `ofstream`       |
*/
//-------------------------------------------------------------------------
int main(){

	ofstream of;

	of.open("abc.txt",ofstream::app);
	
	if(of.fail())
	{
		cout<<"fail to open file";
		return -1;
	}


	of<<"add1"<<endl<<"add3"<<endl;
	of<<"add2";

	of.close();	

}
