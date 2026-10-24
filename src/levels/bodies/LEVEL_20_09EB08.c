typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0019AC50;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_0019AC50.a = 0;
            D_0019AC50.d = 1.0f;
            D_0019AC50.c = 0;
            D_0019AC50.b = 0;
        }
    }
}
