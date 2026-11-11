typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0027D548;

void func_0A0DD0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0027D548.a = 0;
        D_0027D548.d = 1.0f;
        D_0027D548.c = 0;
        D_0027D548.b = 0;
    }
}
