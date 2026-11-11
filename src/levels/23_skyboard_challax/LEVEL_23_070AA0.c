typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00207830;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_00207830.a = 0;
            D_00207830.d = 1.0f;
            D_00207830.c = 0;
            D_00207830.b = 0;
        }
    }
}
