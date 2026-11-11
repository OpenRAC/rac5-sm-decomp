typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0037D948;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_0037D948.a = 0;
            D_0037D948.d = 1.0f;
            D_0037D948.c = 0;
            D_0037D948.b = 0;
        }
    }
}
