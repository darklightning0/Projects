#include <iostream>

using namespace std;

const int matrix_size = 4;

bool checked[matrix_size][matrix_size] = {};
int groups[matrix_size * 2][matrix_size * 2] = {};
int matrix[matrix_size][matrix_size] = {

    {1, 1, 2, 1},
    {1, 3, 2, 3},
    {2, 1, 3, 3},
    {3, 2, 1, 1}

};

int group = 0;
int order = 0;

bool check(int n1, int n2, int c1, int c2, int &new_n1, int &new_n2){

    if(!checked[c1][c2]){

        if(matrix[n1][n2] == matrix[c1][c2]){

            checked[n1][n2] = true;
            checked[c1][c2] = true;
            groups[group][order++] = matrix[c1][c2];
            new_n1 = c1;
            new_n2 = c2;
            return true;

        }

    }

    return false;
}

void scan(int i, int j){

    if(checked[i][j]) return;

    int f1 = i;
    int f2 = j;

    int new_i, new_j;
    bool found = false;

    if(j > 0){

        if(check(i, j, i, j - 1, new_i, new_j)){

            scan(new_i, new_j);
            found = true;

        }

    }

    if(j < matrix_size - 1){

        if(check(i, j, i, j + 1, new_i, new_j)){

            scan(new_i, new_j);
            found = true;

        }

    }

    if(i > 0){

        if(check(i, j, i - 1, j, new_i, new_j)){

            scan(new_i, new_j);
            found = true;

        }

    }

    if(i < matrix_size - 1){

        if(check(i, j, i + 1, j, new_i, new_j)){

            scan(new_i, new_j);
            found = true;

        }

    }

    if(found){

        groups[group][order++] = matrix[f1][f2];
        group++;
        order = 0;

    }
}

int main(){

    for(int i = 0; i < matrix_size; i++){

        for(int j = 0; j < matrix_size; j++){

            scan(i, j);

        }

    }

    for(int i = 0; i < group; i++){

        for(int j = 0; j < matrix_size * 2 && groups[i][j] != 0; j++){

            cout << groups[i][j] << " ";

        }

        cout << endl;

    }

}
