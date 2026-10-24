typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003AC530;

void func_1987A0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003AC530.a = 0;
        D_003AC530.d = 1.0f;
        D_003AC530.c = 0;
        D_003AC530.b = 0;
    }
}
