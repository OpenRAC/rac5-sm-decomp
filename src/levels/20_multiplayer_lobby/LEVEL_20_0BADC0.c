typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0019F008;

void func_0BADC0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0019F008.a = 0;
        D_0019F008.d = 1.0f;
        D_0019F008.c = 0;
        D_0019F008.b = 0;
    }
}
