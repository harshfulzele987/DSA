#include <iostream>
using namespace std;

int totalProduct = 0 ;
int boughtProduct = 0 ;
int numofproduct =0 ;
struct Node
{
    int data ; // prize of the product
    string name ; // name of the product
    bool buy ;
    struct Node *left ;
    struct Node *right ;
};

Node* Insert( Node *root ,int data ,string name){
    if (root == NULL )
    {
        root = new Node() ;
        root->data= data ;
        root->name = name ;
        root->left = root->right =NULL ;
        totalProduct++;
    }
    else if (data<=root->data)
    {
        root->left = Insert(root->left,data,name);
    }
    else
    {
        root->right = Insert(root->right,data,name );
    }
    return root ;

 }

Node* minValueNode(struct Node* node)
{
    struct Node* current = node;

    /* loop down to find the leftmost leaf */
    while (current && current->left != NULL)
        current = current->left;

    return current;
}

 Node* deleteNode(struct Node *root, int key)
{
    // base case
    if (root == NULL)
        return root;

    // If the key to be deleted is
    // smaller than the root's
    // key, then it lies in left subtree
    if (key < root->data)
        root->left = deleteNode(root->left, key);

    // If the key to be deleted is
    // greater than the root's
    // key, then it lies in right subtree
    else if (key > root->data)
        root->right = deleteNode(root->right, key);

    // if key is same as root's key, then This is the node
    // to be deleted
    else {
        // node with only one child or no child
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            totalProduct--;
            return temp;
        }
        else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            totalProduct--;
            return temp;

        }

        // node with two children: Get the inorder successor
        // (smallest in the right subtree)
        struct Node* temp = minValueNode(root->right);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);

    }

    return root;
}


void InorderTransval(Node *root){
    if (root == NULL) return;

    InorderTransval(root->left);
    printf("%d ",root->data);
    cout<<root->name <<endl ;

    //sum = sum + root->data ;
    InorderTransval(root->right);

}


Node* Find(Node *root,int prize){
    if (root == NULL || root->data == prize)
    {
        return root ;
    }
    if (root->data < prize)
    {
        return Find(root->right ,prize) ;
    }
    return Find(root->left ,prize) ;
}

int find_min(Node* root){
    if(root == NULL) return -1 ;
    while (root->left != NULL)
    {
        root = root->left ;
    }
    return root->data ;
}

int find_max(Node* root){
    Node* current =  root ;
    while (current->right != NULL)
    {
        current = current->right ;
    }
    return current->data ;
}

int buyProduct(Node *root){
    Node *current = root ;
    int prize ;
    int total = 0 ;
    string exit = "N" ;

    while (exit =="N" || exit =="n")
    {
    cout<< " Available are "<< endl ;
    InorderTransval(root);

    cout<<" enter prize of the product to buy"<< endl ;
    cin>>prize ;
    current  = Find(root ,prize);
    current->buy = true ;

    total = total +  current->data ;
    boughtProduct++ ;
    cout<<"Product bought Sucessfully ..."<< endl ;
    cout<<"Do you want to exit ..?(y/n)"<< endl ;
    cin>>exit ;
    current = root ;

    }
    return total ;

}
void no_of_product(Node *root ,int g_prize){

   if(root == NULL) return ;
   no_of_product(root->left,g_prize);
//    totalProduct++ ;
   if(root->buy=true && root->data >g_prize){
        numofproduct++ ;
    }
    no_of_product(root->right,g_prize);
}


int main(){

    string name ;
    int finalprize=0  ;
    Node *root =NULL;
    Node *root2;


    root = Insert(root,5 ,"Lemon ");
    root = Insert(root,10,"Orange");
    root = Insert(root,30,"Papaya");
    root = Insert(root,13,"Banana");
    root = Insert(root,40,"Mango");
    root = Insert(root,11,"Grape");

    root2 = root ;
    cout<<"                             ASSignement 5"<<endl ;
    cout<<"---------xox------------xox---------------"<<endl;
    cout<<"1.Add Item"<<endl ;
    cout<<"2.Remove Item"<<endl ;
    cout<<"3.Total No of Item "<<endl ;
    cout<<"4.Search For Item "<<endl ;
    cout<<"5.Find Item With Minimum prize "<<endl ;
    cout<<"6.Find Item With Maximum Prize"<<endl ;
    cout<<"7.Dsiplay Items Prize Wise "<<endl ;
    cout<<"8.Buy some proDuct"<<endl ;
    cout<<"9.Display Number of Items Purchased at cost below given cost and above given cost "<<endl ;
    cout<<"10.Display Total prize "<<endl ;
    cout<<"---------xox------------xox---------------"<<endl;

    int choice ;

    while (choice!=11)
    {
        cout<<"Enter Your Choice "<<endl ;
        cin>>choice ;

        switch (choice)
        {
        case 1:
            int prize ;

            cout<<" Enter product name to Insert "<<endl ;
            cin>> name ;
            cout<<" Enter product prize "<<endl ;
            cin>>prize ;
            root = Insert(root,prize,name);
            cout<<"---------xox------------xox---------------"<<endl;
            break;
        case 2:
            int prize1 ;
            cout<<" Enter product prize "<<endl ;
            cin>>prize ;
            root = deleteNode(root,prize);
            cout<<"---------xox------------xox---------------"<<endl;
            break;
        case 3:
            cout<<" Total Number of product are "<<totalProduct<<endl ;
            cout<<"---------xox------------xox---------------"<<endl;
            break;
        case 4:
            cout<<" Enter product Prize to search "<<endl ;
            cin>> prize ;
            root = Find(root,prize);
            if (root != NULL)
                {
                    cout<<"Product Found With Name "<<root->name  << endl;
                }
                else
                {
                    cout<<"No Such PRoduct " ;
                    root = root2 ;
                }
            cout<<"---------xox------------xox---------------"<<endl;
            break ;
        case 5:
            int min;
            min = find_min(root);
            cout<<"Product with minimum prize is "<<min <<endl;
            cout<<"---------xox------------xox---------------"<<endl;
            break ;

        case 6:
            int max ;
            max = find_max(root);
            cout<<"Product with Maximum prize is "<<max <<endl;
            cout<<"---------xox------------xox---------------"<<endl;
            break ;

        case 7:
            InorderTransval(root);
            cout<<"---------xox------------xox---------------"<<endl;
            break;
        case 8:
            finalprize = buyProduct(root);
            cout<<"---------xox------------xox---------------"<<endl;
            break ;
        case 9 :

            // if (boughtProduct ==0 )
            // {
            //     cout<<"First Buy Some Product"<<endl ;
            //     finalprize = buyProduct(root) ;
            // }
            cout<<" Enter given prize "<<endl ;
            cin>>prize1;

            no_of_product(root,prize1);
            cout<<" Total  product greater than given prize are "<<numofproduct << endl;
            cout<<" Total  product less than given prize are "<<boughtProduct-numofproduct << endl ;
            cout<<"---------xox------------xox---------------"<<endl;
            break ;
        case 10 :
            cout<<" Final Prize of product are "<<finalprize << endl;
            cout<<"---------xox------------xox---------------"<<endl;
            break;
        default:
            cout<<"---------xox------------xox---------------"<<endl;
            break;
            exit;
        }


    }



    return 0;
}
