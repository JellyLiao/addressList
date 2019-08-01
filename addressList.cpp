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
	cout<<"+------��ѡ���ܣ�             ------+"<<endl;
	cout<<"+------1����ʾȫ����ϵ��        ------+"<<endl;
	cout<<"+------2��������ϵ��            ------+"<<endl;
	cout<<"+------3���޸���ϵ��            ------+"<<endl;
	cout<<"+------4��ɾ����ϵ��            ------+"<<endl;
	cout<<"+------5����ѯ��ϵ��            ------+"<<endl;
	cout<<"+------0���˳�ϵͳ              ------+"<<endl;
	cout<<"+-------------------------------------+"<<endl;
	cout<<"+-------------------------------------+"<<endl;
}

showAll(contacts *a){
	for(int i=0;i<number;i++){
		cout<<"��"<<i+1<<"���ˣ�"<<endl;
		cout<<"��ţ�"<<a[i].num<<"  ������"<<a[i].name<<"  ���䣺"<<a[i].age<<"  �绰��"<<a[i].tel<<"  ��ַ��"<<a[i].address<<"  ��ע��"<<a[i].notes<<endl;
	}
	cout<<"number="<<number<<endl;
	cout<<"��Ϣ����ʾ���..."<<endl;
}

add(contacts *a){
	int i=number;
	cout<<"��ţ�";
	cin>>a[i].num;
	cout<<"������";
	cin>>a[i].name;
	cout<<"���䣺";
	cin>>a[i].age;
	cout<<"�绰��";
	cin>>a[i].tel;
	cout<<"��ַ��";
	cin>>a[i].address;
	cout<<"��ע��";
	cin>>a[i].notes;
	number++;
	cout<<"number="<<number<<endl;
	cout<<"��Ϣ�ѱ���..."<<endl;
}

alter(contacts *a){
	int i;
	string nname,oname;
	cout<<"ԭ������"<<endl;
	cin>>oname;
	cout<<"��������"<<endl;
	cin>>nname;
	for(i=0;i<number;i++){
		if(a[i].name==oname){
			a[i].name=nname;
		    cout<<"��ţ�"<<a[i].num<<"  ������"<<a[i].name<<"  ���䣺"<<a[i].age<<"  �绰��"<<a[i].tel<<"  ��ַ��"<<a[i].address<<"  ��ע��"<<a[i].notes<<endl;
		}
	}
	
}

/*
searchNum(contacts a){
	int i,searchNo;
	cout<<"��������ϵ�˱�ţ�";
	cin>>searchNo;
	for(i=0;i<number;i++){
		if(a.num[i]==searchNo){
			cout<<"��ţ�"<<a[i].num<<"  ������"<<a[i].name<<"  ���䣺"<<a[i].age<<"  �绰��"<<a[i].tel<<"  ��ַ��"<<a[i].address<<"  ��ע��"<<a[i].notes<<endl;
			cout<<"��ѯ����...";
		}
	}
	cout<<"���޴���"<<endl;
}

searchName(contacts ***a){
	int i;
	string searchNa;
	cout<<"��������ϵ��������";
	cin>>searchNa;
	for(i=0;i<number;i++){
		if(a.name[i]==searchNa){
			cout<<"��ţ�"<<a[i].num<<"  ������"<<a[i].name<<"  ���䣺"<<a[i].age<<"  �绰��"<<a[i].tel<<"  ��ַ��"<<a[i].address<<"  ��ע��"<<a[i].notes<<endl;
			cout<<"��ѯ����...";
		}
	}
	cout<<"���޴���"<<endl;
}

searchTel(contacts ***a){
	int i;
	string searchTe;
	cout<<"��������ϵ�˵绰��";
	cin>>searchTe;
	for(i=0;i<number;i++){
		if(a.tel[i]==searchTe){
			cout<<"��ţ�"<<a[i].num<<"  ������"<<a[i].name<<"  ���䣺"<<a[i].age<<"  �绰��"<<a[i].tel<<"  ��ַ��"<<a[i].address<<"  ��ע��"<<a[i].notes<<endl;
			cout<<"��ѯ����...";
		}
	}
	cout<<"���޴���"<<endl;	
}
*/

searchWI(){	
    cout<<"+-------------------------------------+"<<endl;
	cout<<"+------��ѡ���ѯ��ʽ��         ------+"<<endl;
	cout<<"+------1�������                ------+"<<endl;
	cout<<"+------2��������                ------+"<<endl;
	cout<<"+------3�����绰                ------+"<<endl;
	cout<<"+------0���˷�����һ��          ------+"<<endl;
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
				cout<<"��������ϵ�˱�ţ�";
				cin>>searchNo;
				for(int i=0;i<number;i++){
					if(a[i].num==searchNo){
						cout<<"��ţ�"<<a[i].num<<"  ������"<<a[i].name<<"  ���䣺"<<a[i].age<<"  �绰��"<<a[i].tel<<"  ��ַ��"<<a[i].address<<"  ��ע��"<<a[i].notes<<endl;
						cout<<"��ѯ����...";
					}
				}
				cout<<"���޴���..."<<endl;
			}
			break;
			case 2:{
				string searchNa;
				cout<<"��������ϵ��������";
				cin>>searchNa;
				for(int i=0;i<number;i++){
					if(a[i].name==searchNa){
						cout<<"��ţ�"<<a[i].num<<"  ������"<<a[i].name<<"  ���䣺"<<a[i].age<<"  �绰��"<<a[i].tel<<"  ��ַ��"<<a[i].address<<"  ��ע��"<<a[i].notes<<endl;
						cout<<"��ѯ����...";
					}
				}
				cout<<"���޴���..."<<endl;
			}
			break;
			case 3:{
				string searchTe;
				cout<<"��������ϵ�˵绰��";
				cin>>searchTe;
				for(int i=0;i<number;i++){
					if(a[i].tel==searchTe){
						cout<<"��ţ�"<<a[i].num<<"  ������"<<a[i].name<<"  ���䣺"<<a[i].age<<"  �绰��"<<a[i].tel<<"  ��ַ��"<<a[i].address<<"  ��ע��"<<a[i].notes<<endl;
						cout<<"��ѯ����...";
					}
				}
				cout<<"���޴���..."<<endl;
			}
			break;
			case 0:
				cout<<"������һ��Ŀ¼"<<endl;
				break;
			default:
				cout<<"��������ȷ���ܱ�ţ�"<<endl;
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
		cout<<"����ϵ�����Ƴ�...";
	}
}

quit(){
	cout<<"ϵͳ�����˳�..."<<endl;
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
			cout<<"��������ȷ�Ĺ��ܱ�ţ�"<<endl;break;
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
