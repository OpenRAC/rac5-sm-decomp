typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_002FA350;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_002FA350.a = 0;
            D_002FA350.d = 1.0f;
            D_002FA350.c = 0;
            D_002FA350.b = 0;
        }
    }
}
