#include<iostream>
#include<stdio.h>
using namespace std;

struct person
{
	char name[20];
	char surname[20];
	char gender[10];
	int age;
	char phone[10];
};

void recibirPersonas(struct person pv[5]){
	struct person *h;
	for(int i=0;i<5;i++){
		h=pv+i;
		cout<<"\nIngresa el nombre de la persona #"<<i;
		cin.getline(h->name,20);
		cout<<"\nIngresa el apellido de la persona #"<<i;
		cin.getline(h->surname,20);
		cout<<"\nIngresa el genero de la persona #"<<i;
		cin.getline(h->gender,10);
		cout<<"\nIngresa el telefono de la persona #"<<i;
		cin.getline(h->phone,10);
		cout<<"\nIngresa la edad de la persona #"<<i;
		cin>>h->age;
		fflush(stdin);
	}
}

void mayores(struct person pv[5]){
	struct person h;
	char help[20];
	char help2[20];
	for(int i=0;i<5;i++){
		h=pv[i];
		if(h.age>=18){
			cout<<"\n"<<h.name<<" "<<h.surname<<" es mayor de edad";
		}
	}
}

int main(){
	struct person pv[5];
	cout<<"Este programa guarda los datos de 5 personas, y te dice quienes son mayores de edad";
	recibirPersonas(pv);
	mayores(pv);
}
