typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00368D70;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_00368D70.a = 0;
            D_00368D70.d = 1.0f;
            D_00368D70.c = 0;
            D_00368D70.b = 0;
        }
    }
}
