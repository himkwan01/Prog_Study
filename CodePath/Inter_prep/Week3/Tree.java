static vector<int> arr;
void chk(TNode node){
    if(node){
        chk(node->left);
        arr.push_back(node->data);
        chk(node->right);
    }
}
bool chk1(Tnode node){
    chk(node);
    for(int i=1;i<arr.size();i++{
        if(arr[i-1]>arr[i])
            return false;
    }
    return true;
}

static int leaf=0;
void chk(TNode node){
    if(node){
        chk(node->left);
        chk(node->right);
        if(!node->left && !node->right)
            leaf++;
    }
}

bool ch3(TNode n1, TNode n2){
    bool same = false;
    chk(n1,n2, same);
    return same;
}


void chk(TNode node1, TNode node1, bool &same){
    if(same)
        return;
    if(node1){
        if(!node2){
            same=true;
            return;
        }
        if(node1->data != node2->data){
            same=true;
            return;
        }
        chk(node1->left, node2->left);
        chk(node1->right, node2->right);

    }
}


bool ch4(TNode n1, int target){
    bool  rtnval = 0;     // -1 means false, 1 means true
    chr(n,target,0,ans);
    return false;
}

void ch4(TNode n, int target, int sum, bool &ans){
    if(ans==1){
        return;
    if(n){
        ch4(n->left,target, sum+n->data,ans);
        if(!n->left && !n->right && n->data+sum==target){
            ans = 1;
            return;
        }
        ch4(n->right,target,sum+n->data,ans);
    }
}





