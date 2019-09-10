// An array of struct 

typedef struct {
    int i, j, k;
} three_d_point;

int main() {
    three_d_point p[10];
    for(int i = 0; i < 10; i++) {
       p[i].i = i + 1;
       p[i].j = i + 2;
       p[i].k = i + 3;
    }
}
