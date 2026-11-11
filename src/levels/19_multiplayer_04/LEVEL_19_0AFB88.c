typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00276FC0;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_00276FC0.a = 0;
            D_00276FC0.d = 1.0f;
            D_00276FC0.c = 0;
            D_00276FC0.b = 0;
        }
    }
}
