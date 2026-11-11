typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00344C18;

void func_0F1D70(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00344C18.a = 0;
        D_00344C18.d = 1.0f;
        D_00344C18.c = 0;
        D_00344C18.b = 0;
    }
}
