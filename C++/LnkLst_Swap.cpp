/*------------------------------------------------------------------------------
 * Purpose: give a list change it to first end first end
 * Input:   1->2->3->4->5->6
 * Output:  1->6->2->5->3->4
 -----------------------------------------------------------------------------*/

#include <bits/stdc++.h>
using namespace std;
struct Node{
  int val;
  Node *next;
  Node(int v):val(v),next(NULL){}
};
Node *func(Node *a){
  int size=0;
  Node *head = a;
  Node *mid=a;
  
  // get the size of the list
  while(a){
    a=a->next;
    size++;
    if(size%2 && size>1)mid = mid->next;
  }
  
  // mid = ceil((float)size/2)
  cout<<"size = "<<size<<" mid = "<<mid->val<<endl;
  
  // reverse the second half of the list
  // if the list is 1>2>3>4>5>6, it starts at 4
  // reverse it to 6>5>4, line 35 connect 3>6
  Node *pre = NULL;
  Node *temp = mid->next;
  Node *next;  
  while(temp){
    next = temp->next;
    temp->next = pre;
    pre = temp;
    temp = next;
  }
  mid->next = pre;
  
  Node *temp1 = head;       // first half temp ptr
  Node *temp2 = mid->next;  // second half temp ptr
  while(temp1!=mid){        // stop until first half reach the middle
    Node *next1 = temp1->next;
    Node *next2 = temp2->next;
    temp1->next = temp2;
    temp2->next = next1;
    mid->next = next2;
    temp1 = next1;
    temp2 = next2;
  }
  return head;
}

int main(){
  int size;
  cout<<"Please input the size of the array: ";
  cin>>size;
  Node *head = new Node(1);
  Node *temp = head;
  for(int i=1;i<size;i++){
    temp->next = new Node(i+1);
    temp = temp->next;
  }
  temp = head;
  while(temp){
    cout<<temp->val<<endl;
    temp = temp->next;
  }
  head = func(head);
  temp = head;
  while(temp){
    cout<<temp->val<<endl;
    temp = temp->next;
  }
  // free the memory
  while(head){
    temp = head->next;  
    delete head;
    head = temp;
  }
  return 0;
}
