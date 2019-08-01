/*
	Name: Simple Address List Manager System
	Copyright:  JellyLiao
	Author: JellyLiao
	Date: 01/08/19 21:54
	Description: This is a simple address list manager system.This program is built by C++.You can use this system to manager your address list.In this system,
				 you can search all informations and show it in the window.You also can add, delete, modify those informations.But,this only is a demo program,
				 many features still need to be added.
*/


#include<iostream>
#include<string>

using namespace std;

int number=0;

typedef struct contacts{
	int num;
	string name;
	int age;
	string tel;
	string address;
	string notes;
} contacts;

welcome(){
	cout<<"WELCOME TO USE THIS ADDRESS LIST SYSTEM"<<endl;
}

menu(){
	cout<<"+-------------------------------------+"<<endl;
	cout<<"+------请选择功能：             ------+"<<endl;
	cout<<"+------1、显示全部联系人        ------+"<<endl;
	cout<<"+------2、增加联系人            ------+"<<endl;
	cout<<"+------3、修改联系人            ------+"<<endl;
	cout<<"+------4、删除联系人            ------+"<<endl;
	cout<<"+------5、查询联系人            ------+"<<endl;
	cout<<"+------0、退出系统              ------+"<<endl;
	cout<<"+-------------------------------------+"<<endl;
	cout<<"+-------------------------------------+"<<endl;
}

showAll(contacts *a){
	for(int i=0;i<number;i++){
		cout<<"第"<<i+1<<"个人："<<endl;
		cout<<"编号："<<a[i].num<<"  姓名："<<a[i].name<<"  年龄："<<a[i].age<<"  电话："<<a[i].tel<<"  地址："<<a[i].address<<"  备注："<<a[i].notes<<endl;
	}
	cout<<"number="<<number<<endl;
	cout<<"信息已显示完毕..."<<endl;
}

add(contacts *a){
	int i=number;
	cout<<"编号：";
	cin>>a[i].num;
	cout<<"姓名：";
	cin>>a[i].name;
	cout<<"年龄：";
	cin>>a[i].age;
	cout<<"电话：";
	cin>>a[i].tel;
	cout<<"地址：";
	cin>>a[i].address;
	cout<<"备注：";
	cin>>a[i].notes;
	number++;
	cout<<"number="<<number<<endl;
	cout<<"信息已保存..."<<endl;
}

alter(contacts *a){
	int i;
	string nname,oname;
	cout<<"原姓名："<<endl;
	cin>>oname;
	cout<<"新姓名："<<endl;
	cin>>nname;
	for(i=0;i<number;i++){
		if(a[i].name==oname){
			a[i].name=nname;
		    cout<<"编号："<<a[i].num<<"  姓名："<<a[i].name<<"  年龄："<<a[i].age<<"  电话："<<a[i].tel<<"  地址："<<a[i].address<<"  备注："<<a[i].notes<<endl;
		}
	}
	
}

/*
searchNum(contacts a){
	int i,searchNo;
	cout<<"请输入联系人编号：";
	cin>>searchNo;
	for(i=0;i<number;i++){
		if(a.num[i]==searchNo){
			cout<<"编号："<<a[i].num<<"  姓名："<<a[i].name<<"  年龄："<<a[i].age<<"  电话："<<a[i].tel<<"  地址："<<a[i].address<<"  备注："<<a[i].notes<<endl;
			cout<<"查询结束...";
		}
	}
	cout<<"查无此人"<<endl;
}

searchName(contacts ***a){
	int i;
	string searchNa;
	cout<<"请输入联系人姓名：";
	cin>>searchNa;
	for(i=0;i<number;i++){
		if(a.name[i]==searchNa){
			cout<<"编号："<<a[i].num<<"  姓名："<<a[i].name<<"  年龄："<<a[i].age<<"  电话："<<a[i].tel<<"  地址："<<a[i].address<<"  备注："<<a[i].notes<<endl;
			cout<<"查询结束...";
		}
	}
	cout<<"查无此人"<<endl;
}

searchTel(contacts ***a){
	int i;
	string searchTe;
	cout<<"请输入联系人电话：";
	cin>>searchTe;
	for(i=0;i<number;i++){
		if(a.tel[i]==searchTe){
			cout<<"编号："<<a[i].num<<"  姓名："<<a[i].name<<"  年龄："<<a[i].age<<"  电话："<<a[i].tel<<"  地址："<<a[i].address<<"  备注："<<a[i].notes<<endl;
			cout<<"查询结束...";
		}
	}
	cout<<"查无此人"<<endl;	
}
*/

searchWI(){	
    cout<<"+-------------------------------------+"<<endl;
	cout<<"+------请选择查询方式：         ------+"<<endl;
	cout<<"+------1、按编号                ------+"<<endl;
	cout<<"+------2、按姓名                ------+"<<endl;
	cout<<"+------3、按电话                ------+"<<endl;
	cout<<"+------0、退返回上一级          ------+"<<endl;
	cout<<"+-------------------------------------+"<<endl;
	cout<<"+-------------------------------------+"<<endl;
}


search(contacts *a){
	int n;
	do{
		searchWI();
		cin>>n;
		switch(n){
			case 1:{
				int searchNo;
				cout<<"请输入联系人编号：";
				cin>>searchNo;
				for(int i=0;i<number;i++){
					if(a[i].num==searchNo){
						cout<<"编号："<<a[i].num<<"  姓名："<<a[i].name<<"  年龄："<<a[i].age<<"  电话："<<a[i].tel<<"  地址："<<a[i].address<<"  备注："<<a[i].notes<<endl;
						cout<<"查询结束...";
					}
				}
				cout<<"查无此人..."<<endl;
			}
			break;
			case 2:{
				string searchNa;
				cout<<"请输入联系人姓名：";
				cin>>searchNa;
				for(int i=0;i<number;i++){
					if(a[i].name==searchNa){
						cout<<"编号："<<a[i].num<<"  姓名："<<a[i].name<<"  年龄："<<a[i].age<<"  电话："<<a[i].tel<<"  地址："<<a[i].address<<"  备注："<<a[i].notes<<endl;
						cout<<"查询结束...";
					}
				}
				cout<<"查无此人..."<<endl;
			}
			break;
			case 3:{
				string searchTe;
				cout<<"请输入联系人电话：";
				cin>>searchTe;
				for(int i=0;i<number;i++){
					if(a[i].tel==searchTe){
						cout<<"编号："<<a[i].num<<"  姓名："<<a[i].name<<"  年龄："<<a[i].age<<"  电话："<<a[i].tel<<"  地址："<<a[i].address<<"  备注："<<a[i].notes<<endl;
						cout<<"查询结束...";
					}
				}
				cout<<"查无此人..."<<endl;
			}
			break;
			case 0:
				cout<<"返回上一级目录"<<endl;
				break;
			default:
				cout<<"请输入正确功能编号！"<<endl;
				break;
		}
	}while(n);
}

delect(contacts *a){
	int i,j;
	i=search(a);
	if(i>0){
		for(j=i;j<number-1;j++){
			a[j]=a[j+1];
		}
		number--;
		cout<<"该联系人已移除...";
	}
}

quit(){
	cout<<"系统正在退出..."<<endl;
}

function(int n,contacts a[50]){
	system("cls");
	switch(n){
		case 1:
			showAll(a);break;
		case 2:
			add(a);break;
		case 3:
			alter(a);break;
		case 4:
			delect(a);break;
		case 5:
			search(a);break;
		case 0:
			quit();break;
		default:
			cout<<"请输入正确的功能编号！"<<endl;break;
	}
}

int main(){
	int n;
	contacts a[50];
	welcome();
	do{
		menu();
		cin>>n;
		function(n,a);
	}while(n);
	
	return 0;
}
