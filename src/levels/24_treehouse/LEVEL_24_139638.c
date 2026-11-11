typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0035D858;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_0035D858.a = 0;
            D_0035D858.d = 1.0f;
            D_0035D858.c = 0;
            D_0035D858.b = 0;
        }
    }
}
