typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00346E58;

void func_0CB0D0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00346E58.a = 0;
        D_00346E58.d = 1.0f;
        D_00346E58.c = 0;
        D_00346E58.b = 0;
    }
}
