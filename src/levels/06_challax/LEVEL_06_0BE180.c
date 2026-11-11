typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00315F00;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_00315F00.a = 0;
            D_00315F00.d = 1.0f;
            D_00315F00.c = 0;
            D_00315F00.b = 0;
        }
    }
}
