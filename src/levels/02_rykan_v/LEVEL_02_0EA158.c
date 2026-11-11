typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00344B88;

void func_0EA158(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00344B88.a = 0;
        D_00344B88.d = 1.0f;
        D_00344B88.c = 0;
        D_00344B88.b = 0;
    }
}
