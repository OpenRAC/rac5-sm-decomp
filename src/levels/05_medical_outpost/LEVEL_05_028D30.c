typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0021D098;

void func_028D30(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0021D098.a = 0;
        D_0021D098.d = 1.0f;
        D_0021D098.c = 0;
        D_0021D098.b = 0;
    }
}
