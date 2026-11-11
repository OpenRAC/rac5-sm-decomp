typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00343890;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_00343890.a = 0;
            D_00343890.d = 1.0f;
            D_00343890.c = 0;
            D_00343890.b = 0;
        }
    }
}
