typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003AEF28;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_003AEF28.a = 0;
            D_003AEF28.d = 1.0f;
            D_003AEF28.c = 0;
            D_003AEF28.b = 0;
        }
    }
}
