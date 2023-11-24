 /*
 #include <iostream>
using namespace std;

class matrix {
public:
    int m;
    int n;
    int nz;
    int** e; 
};

class sparse {
private:
    int* i; 
    int* j; 
    int* x;
	 

public:
    sparse(int size) {
        this->i = new int[size];
        this->j = new int[size];
        this->x = new int[size];
    }

    void display() {
        cout << "Sparse Matrix:" << endl;
       for (int k = 0; k < size; k++) {
            cout << i[k] << " " << j[k] << " " << x[k] << endl;
        }
    }
};

int main() {
    matrix* A = new matrix;
    cout << "Enter m, n, no. of non-zero elements: " << endl;
    cin >> A->m >> A->n >> A->nz;
    A->e = new int* [A->nz]; 
    for (int i = 0; i < A->nz; i++) {
        A->e[i] = new int[3]; 
        cout << "Enter element " << i + 1 << ": ";
        cin >> A->e[i][0] >> A->e[i][1] >> A->e[i][2];
    }

    sparse* sp = new sparse(A->nz);
    for (int i = 0; i < A->nz; i++) {
        sp->i[i] = A->e[i][0];
        sp->j[i] = A->e[i][1];
        sp->x[i] = A->e[i][2];
    }

    sp->display();
    for (int i = 0; i < A->nz; i++) {
    delete[] A->e[i];
}
delete[] A->e;
delete A;


    return 0;
}
*/
