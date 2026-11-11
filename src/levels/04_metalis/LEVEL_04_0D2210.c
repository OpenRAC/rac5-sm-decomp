typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00346808;

void func_0D2210(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00346808.a = 0;
        D_00346808.d = 1.0f;
        D_00346808.c = 0;
        D_00346808.b = 0;
    }
}
