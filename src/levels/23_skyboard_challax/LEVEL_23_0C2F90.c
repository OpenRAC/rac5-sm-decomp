typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002FD438;

void func_0C2F90(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002FD438.a = 0;
        D_002FD438.d = 1.0f;
        D_002FD438.c = 0;
        D_002FD438.b = 0;
    }
}
