typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0027BB38;

void func_0D70E0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0027BB38.a = 0;
        D_0027BB38.d = 1.0f;
        D_0027BB38.c = 0;
        D_0027BB38.b = 0;
    }
}
