typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003ACA00;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_003ACA00.a = 0;
            D_003ACA00.d = 1.0f;
            D_003ACA00.c = 0;
            D_003ACA00.b = 0;
        }
    }
}
