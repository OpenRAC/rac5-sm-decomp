typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00398910;

void func_1D15E0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00398910.a = 0;
        D_00398910.d = 1.0f;
        D_00398910.c = 0;
        D_00398910.b = 0;
    }
}
