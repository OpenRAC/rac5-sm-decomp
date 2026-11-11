typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00360BC8;

void func_1709F0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00360BC8.a = 0;
        D_00360BC8.d = 1.0f;
        D_00360BC8.c = 0;
        D_00360BC8.b = 0;
    }
}
