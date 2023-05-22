#include <iostream>

// Struktur Node untuk pohon biner
struct Node {
    int data;        // Data pada node
    Node* left;      // Pointer ke anak kiri
    Node* right;     // Pointer ke anak kanan

    Node(int value) {   // Konstruktor untuk inisialisasi node
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Fungsi untuk traversal Post-order
void postOrderTraversal(Node* node) {
    if (node == nullptr) {  // Jika node adalah nullptr, kembali (basis rekursi)
        return;
    }

    postOrderTraversal(node->left);    // Rekursi ke anak kiri
    postOrderTraversal(node->right);   // Rekursi ke anak kanan
    std::cout << node->data << " ";    // Cetak data pada node saat ini
}

int main() {
    // Membangun pohon biner
    Node* root = new Node(18);   // Membuat node akar dengan data 18
    root->left = new Node(29);   // Membuat node anak kiri dengan data 29
    root->right = new Node(30);  // Membuat node anak kanan dengan data 30
    root->right->left = new Node(32);    // Membuat node anak kiri dari 30 dengan data 32
    root->right->right = new Node(33);   // Membuat node anak kanan dari 30 dengan data 33

    // Melakukan traversal Post-order
    std::cout << "Post-order traversal: ";
    postOrderTraversal(root);    // Memanggil fungsi postOrderTraversal dengan root sebagai parameter
    std::cout << std::endl;

    // Dealokasi memori untuk mencegah kebocoran memori
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}

//Post-order : Kiri pertama 29, kanan 32, rootnya 30 tapi juga jadi kiri, kanan 33 dan rootnya 18. Jadi akan muncul data : 29, 32, 30, 33, 18.
