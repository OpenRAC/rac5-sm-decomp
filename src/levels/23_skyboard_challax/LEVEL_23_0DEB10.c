typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002FEB68;

void func_0DEB10(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002FEB68.a = 0;
        D_002FEB68.d = 1.0f;
        D_002FEB68.c = 0;
        D_002FEB68.b = 0;
    }
}
