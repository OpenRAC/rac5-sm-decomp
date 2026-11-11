typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003EB358;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_003EB358.a = 0;
            D_003EB358.d = 1.0f;
            D_003EB358.c = 0;
            D_003EB358.b = 0;
        }
    }
}
