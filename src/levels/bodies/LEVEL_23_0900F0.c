typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0026C328;

void func_0900F0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0026C328.a = 0;
        D_0026C328.d = 1.0f;
        D_0026C328.c = 0;
        D_0026C328.b = 0;
    }
}
