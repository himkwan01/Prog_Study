#include <bits/stdc++.h>
using namespace std;
typedef map<char,set<char> >::iterator mit;
typedef set<char>::iterator sit;

struct Node{
    char data;
    Node *left;
    Node *right;
    Node(char n):data (n), left (0), right (0){}  
};
void search(Node *n, char data, Node *&target){
	if(n){
		if(n->data==data){
			target=n;
			return;
		}
        search(n->left,data,target);
        search(n->right,data,target);
	}
}
void Insert(Node *n, char parent, char child){
	Node *worker=0;
    cerr<<"node = "<<n->data<<" | parent = "<<parent<<" | child = "<<child<<endl;
	search(n, parent, worker);

        if(!worker->left){
			cerr<<"insert "<<child<<" at the left\n";
            worker->left = new Node(child);
		}
        else if(!worker->right){
			cerr<<"insert "<<child<<" at the right\n";
            worker->right = new Node(child);
		}
		else 
			cerr<<"full\n";

	
    
}

void preOrder(Node *n, string &str){
    //cout<<str;
    if(n){
        str+="(";
        str+=n->data;
        preOrder(n->left,str);
        preOrder(n->right,str);
        str+=")";
    }
}
string SExpression(string nodes) {
    string result;
    char key,value;
    map<char,set<char> > m;
    Node *root=0;
    map<char,int> child;
    for(int i=0;i<nodes.length()+1;i++){
        if(i%6==5){
            if(!m[key].insert(value).second)return "E2";
            child[value]++;
            if(child[value]>1)return "E3";
            if(m[key].size()>2)return "E1";
        }
        if(i%6==1){
            key=nodes[i];
        }
        if(i%6==3){
            value=nodes[i];
        }
    }
    for(mit i=m.begin();i!=m.end();i++){
        if(!root){
            root=new Node(i->first);
            cerr<<"root = "<<root->data<<endl;
        }
        for(sit j=i->second.begin();j!=i->second.end();j++){
            cerr<<"i->first = "<<i->first<<endl;
            cerr<<"*j = "<<*j<<endl;
            Insert(root,i->first, *j);
        }
    }
    preOrder(root,result);
    return result;
}
int main(){
	string str;
	getline(cin,str);
	cerr<<SExpression(str);
	return 0;
}

