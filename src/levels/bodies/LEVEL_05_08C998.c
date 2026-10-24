typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0022B0C0;

void func_08C998(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0022B0C0.a = 0;
        D_0022B0C0.d = 1.0f;
        D_0022B0C0.c = 0;
        D_0022B0C0.b = 0;
    }
}
