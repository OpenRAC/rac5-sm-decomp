typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003B0598;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_003B0598.a = 0;
            D_003B0598.d = 1.0f;
            D_003B0598.c = 0;
            D_003B0598.b = 0;
        }
    }
}
