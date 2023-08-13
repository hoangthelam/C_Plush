//b1: khai bao thu vien
#include<bits/stdc++.h>

using namespace std;
//b2: Tao struct => struct Node {Node *next;}
struct Node{
	int data;
	//Them danh sach cac thuoc tinh o day
	Node* next;
};
//b3: Them dau or cuoi or giua (bat ky)
	//tao nut
Node* taonut(){
		Node *p;
		p = new Node;
		cout<<"Nhap data cho Node: ";
		cin>> p->data;
		//Nhap du lieu cho cac thuoc tinh khac
		p->next = NULL;
		return p;
}
	//Chen dau
void chen_dau(Node* &head, Node *p){
	if(head == NULL){
		head = p;
	}else{
		p->next = head;
		head = p;
	}
}
//b4: xoa
void xoa_nut(Node* &head, int y){
	Node *p, *q;
	q = head;
	//b1 : tim q
	while(q != NULL && q->data !=y){
		p = q;
		q = q->next;
	}
	if(q==NULL)
		cout<<"Khong tim thay nut can xoa"<<endl;
	else{
	//b2: tim p
		if(q==head)
			head = head->next;
		else
			p->next = q->next;
		delete q;
	}
}
	
//b5: in ds	
void inds(Node *head){
	Node *q = head;
	while(q != NULL){
		cout<< q->data <<"\t";
		q = q->next;
	}
	cout<<endl;
}
//b6: sap xep
void sxds_tang(Node *head){
	Node *p, *q;
	p = head;
	while(p->next != NULL){
		q = p->next;
		while(q != NULL){
			if(p->data > q->data){
				int t = p->data;
				p->data = q->data;
				q->data = t;
			}
			q = q->next;
		}
		p = p->next;
	}
}
int main(){
	Node *head = NULL;
	Node *p, *q;
	char c;
	int x;
	do{
		p  = taonut();
		chen_dau(head, p);
		cout<<"Ban co muon tao nut tiep (y/n)?";
		fflush(stdin);
		c = getchar();
	}while(c != 'n');
		cout<<"Cac so trong trong danh sach: "<<endl;
		inds(head);
		sxds_tang(head);
		cout<<"Danh sach sau khi sap xep: "<<endl;
		inds(head);
		cout<<"Nhap gia tri can xoa: "<<endl;
		cin>>x;
		xoa_nut(head, x);
		cout<<"Danh sach sau khi xoa: "<<endl;
		inds(head);
	
	return 0;
}
