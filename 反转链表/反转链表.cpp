// 反转链表.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};

node* reverseL(node* head)
{
	if (head==nullptr||head->next==nullptr)
	{
		return head;
	}
	else
	{
		node* pre=head;
		node* p = head->next;
		node* next = nullptr;
		while (p!=nullptr)
		{
			next = p->next;
			p->next = pre;
			pre = p;
			p = next;
		}
		head->next = nullptr;
		return pre;
	}
}


int main()
{
	node* list=nullptr;
	node* rear=list;
	for (int i = 0; i < 10; i++)
	{
		cout << i << "   ";
		node *nd = new node;
		nd->data = i;
		nd->next = nullptr;
		if (list==nullptr)
		{
			list = nd;
			rear = nd;
			continue;
		}
		rear->next = nd;
		rear = rear->next;
	}
	cout << endl;
	node* fuck=reverseL(list);	
	while (fuck!=nullptr)
	{
		cout << fuck->data << "   ";
		fuck = fuck->next;
	}
}

