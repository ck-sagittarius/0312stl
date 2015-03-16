/*************************************************************************
	> File Name: 5stu_vec.cc
	> Author: ck
	> Mail:463451201@qq.com 
	> Created Time: 四  3/ 5 22:32:47 2015
 ************************************************************************/

#include<iostream>
#include<sstream>
#include<vector>
#include<string>
using std::string;
using std::vector;
class stu
{
	public:
		string name;
		double score;
		void show() 
		{
			std::cout<<"name:"<<name<<"   score:"<<score<<std::endl;
		}
};

int main(int argc,char**argv)
{
	vector<stu> arr;
	stu stu1;
	string s;
	std::stringstream iss;
	while(getline(std::cin,s))
	{
		
		std::cout<<s<<std::endl;
		iss<<s;
		std::cout<<iss.str()<<std::endl;
		iss>>stu1.name;
		iss>>stu1.score;
		iss.clear();
		arr.push_back(stu1);
	}
	vector<stu>::iterator it=arr.begin();
	vector <string> arr_name;
	//int cnt=0;
	//for(;it!=arr.end();++it)
	//{
	//	if((*it).score>=60)
	//	{
	//		++cnt;
	//		arr_name.push_back((*it).name);
	//		(*it).show();
	//		//std::cout<<(*it).name<<std::endl;
	//	}
	//}
	//std::cout<<"及格人数:"<<cnt<<std::endl;
	return 0;

}
