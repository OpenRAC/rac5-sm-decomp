typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0030F178;

void func_0AFEA8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0030F178.a = 0;
        D_0030F178.d = 1.0f;
        D_0030F178.c = 0;
        D_0030F178.b = 0;
    }
}
