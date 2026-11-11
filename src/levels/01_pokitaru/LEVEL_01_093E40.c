typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00298120;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_00298120.a = 0;
            D_00298120.d = 1.0f;
            D_00298120.c = 0;
            D_00298120.b = 0;
        }
    }
}
