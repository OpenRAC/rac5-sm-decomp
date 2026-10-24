typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_002E1590;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_002E1590.a = 0;
            D_002E1590.d = 1.0f;
            D_002E1590.c = 0;
            D_002E1590.b = 0;
        }
    }
}
