typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003B43D0;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_003B43D0.a = 0;
            D_003B43D0.d = 1.0f;
            D_003B43D0.c = 0;
            D_003B43D0.b = 0;
        }
    }
}
