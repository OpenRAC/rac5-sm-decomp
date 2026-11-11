typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_001DE380;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_001DE380.a = 0;
            D_001DE380.d = 1.0f;
            D_001DE380.c = 0;
            D_001DE380.b = 0;
        }
    }
}
