typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003A1A20;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_003A1A20.a = 0;
            D_003A1A20.d = 1.0f;
            D_003A1A20.c = 0;
            D_003A1A20.b = 0;
        }
    }
}
