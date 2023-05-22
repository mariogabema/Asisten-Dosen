// header file
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

// pendeklarasian kelas sebuah tree awal
struct Node {
	public:
		int data;
		Node *left;
		Node *right;
};

// fungsi untuk menambahkan node baru
void add_node(Node **root, int value) {
	// jika root masih kosong
	if((*root == NULL)) {
		// pembuatan node baru
		Node *node;
		node = new Node;
		// inisialisasi awal node yang baru dibuat
		node->data = value;
		node->left = NULL;
		node->right = NULL;
		(*root) = node;
		(*root) ->left = NULL;
		(*root) ->right = NULL;
		cout << "Data bertambah!";
	}
	// jika data yang dimasukkan lebih kecil daripada elemen root, makaakan diletakkan di node sebelah kiri
	else if(value < (*root)->data)
		add_node(&(*root)->left, value);
	// jika data yang dimasukkan lebih besar daripada elemen root, makaakan diletakkan di node sebelah kiri
	else if(value > (*root)->data)
		add_node(&(*root)->right, value);
	// jika data yang dimasukkan sama dengan nilai elemen root
	else if(value == (*root)->data)
		cout << "Data sudah ada!";
}

// fungsi yang digunakan untuk mencetak tree secara preorder
void preOrder(Node *root) {
	if(root != NULL) {
		cout << root->data;
		preOrder(root->left);
		preOrder(root->right);
	}
}

// fungsi yang digunakan untuk mencetak tree secara inorder
void inOrder(Node *root) {
	if(root != NULL) {
		inOrder(root->left);
		cout << root->data;
		inOrder(root->right);
	}
}

// fungsi yang digunakan untuk mencetak tree secara postorder
void postOrder(Node *root) {
	if(root != NULL) {
		postOrder(root->left);
		postOrder(root->right);
		cout << root->data;
	}
}

// fungsi utama
int main() {
	// deklarasi variabel
	int pil, data;
	Node *tree;
	tree = NULL;
	
	do {
		cout << "Contoh Program Tree";
		cout << "-------------------";
		cout << "\nMenu";
		cout << "\n------\n";
		cout << "1. Tambah node\n";
		cout << "2. Menampilkan secara pre-order\n";
		cout << "3. Menampilkan secara in-order\n";
		cout << "4. Menampilkan secara post-order\n";
		cout << "5. Keluar program\n";
		cout << "Masukkan pilihan: ";
		cin >> pil;
		
		switch(pil) {
			case 1:
				cout << "\nInput: ";
				cout << "\n-------";
				cout << "\nData baru: ";
				cin >> data;
				// invoke function
				add_node(&tree, data);
				break;
			case 2:
				cout << "\nOutput preorder: ";
				cout << "\n----------------\n";
				if(tree != NULL)
					preOrder(tree);
				else
					cout << "Masih kosong!";
				break;
			case 3:
				cout << "\nOutput inorder: ";
				cout << "\n----------------\n";
				if(tree != NULL)
					inOrder(tree);
				else
					cout << "Masih kosong!";
				break;
			case 4:
				cout << "\nOutput postorder: ";
				cout << "\n----------------\n";
				if(tree != NULL)
					postOrder(tree);
				else
					cout << "Masih kosong!";
				break;
		}
	} while (pil != 5);
	return EXIT_FAILURE;
}
