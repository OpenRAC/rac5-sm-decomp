typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0033D2E8;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_0033D2E8.a = 0;
            D_0033D2E8.d = 1.0f;
            D_0033D2E8.c = 0;
            D_0033D2E8.b = 0;
        }
    }
}
