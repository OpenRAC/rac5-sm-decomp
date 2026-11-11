typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0037C248;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_0037C248.a = 0;
            D_0037C248.d = 1.0f;
            D_0037C248.c = 0;
            D_0037C248.b = 0;
        }
    }
}
