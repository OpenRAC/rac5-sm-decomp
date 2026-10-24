typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003E0970;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_003E0970.a = 0;
            D_003E0970.d = 1.0f;
            D_003E0970.c = 0;
            D_003E0970.b = 0;
        }
    }
}
