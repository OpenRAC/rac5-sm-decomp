typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00247158;

void func_01C898(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00247158.a = 0;
        D_00247158.d = 1.0f;
        D_00247158.c = 0;
        D_00247158.b = 0;
    }
}
