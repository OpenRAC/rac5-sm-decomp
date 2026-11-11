typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_002FEB98;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_002FEB98.a = 0;
            D_002FEB98.d = 1.0f;
            D_002FEB98.c = 0;
            D_002FEB98.b = 0;
        }
    }
}
