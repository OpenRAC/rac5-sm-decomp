typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00282DA0;

void func_0C8BB0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00282DA0.a = 0;
        D_00282DA0.d = 1.0f;
        D_00282DA0.c = 0;
        D_00282DA0.b = 0;
    }
}
