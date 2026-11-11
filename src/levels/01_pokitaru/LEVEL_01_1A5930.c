typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00397050;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_00397050.a = 0;
            D_00397050.d = 1.0f;
            D_00397050.c = 0;
            D_00397050.b = 0;
        }
    }
}
