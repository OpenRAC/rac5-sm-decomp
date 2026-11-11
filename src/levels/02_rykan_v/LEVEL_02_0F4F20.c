typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00344C48;

void func_0F4F20(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00344C48.a = 0;
        D_00344C48.d = 1.0f;
        D_00344C48.c = 0;
        D_00344C48.b = 0;
    }
}
