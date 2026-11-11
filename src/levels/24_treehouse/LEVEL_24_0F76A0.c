typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002FD518;

void func_0F76A0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002FD518.a = 0;
        D_002FD518.d = 1.0f;
        D_002FD518.c = 0;
        D_002FD518.b = 0;
    }
}
