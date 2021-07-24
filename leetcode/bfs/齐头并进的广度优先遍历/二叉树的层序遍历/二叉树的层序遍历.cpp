#include<iostream>
#include<vector>
#include<queue>
#include<stddef.h>
using namespace std;

 struct TreeNode {
      int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<int> a;
        vector<vector<int> > ret;
        
        // while(root != nullptr){

        // }

        return ret;
    }
};

int main(){
    TreeNode root;
    vector<int> a = {3,9,20,NULL,NULL,15,7};
    // void insert(vector<int> a, TreeNode root){
    //     for(int i = 0; i < a.size(); i++){
    //         root.val = a[i];
    //         insert()
    //     }
    
    for(int i  = 0; i < a.size(); i++){
        TreeNode root( a[i], root.left, root.right);
    }
    while( root.val){
        cout<<root.left->val;
        cout<<root.right->val;
    }

    


}