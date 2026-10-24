typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00310670;

void func_0BE048(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00310670.a = 0;
        D_00310670.d = 1.0f;
        D_00310670.c = 0;
        D_00310670.b = 0;
    }
}
