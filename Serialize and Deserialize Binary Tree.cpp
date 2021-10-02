/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    string s;
    
    void dfs(TreeNode* root){
        if(!root) {
            s+="|#"; 
            return;
        }
        s+='|' + to_string(root->val);
        dfs(root->left);
        dfs(root->right);
    }
    
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        s.clear();
        if(!root) return s;
        dfs(root);
        s.erase(0,1);
        return s;
    }

    TreeNode* con(queue<string> &q){
        if(q.front()=="#") {
            q.pop();
            return nullptr;
        }
        TreeNode* root=new TreeNode(stoi(q.front()));
        q.pop();
        root->left=con(q);
        root->right=con(q);
        return root;
    }
    
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.empty()) return nullptr;
        queue<string> q;
        string t;
        for(int i=0;i<data.size();i++){
            if(data[i]!='|') t+=data[i];
            else {
                q.push(t);
                t="";
            }
        }
        q.push(t);
        return con(q);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));