typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0027EDD0;

void func_01AEB0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0027EDD0.a = 0;
        D_0027EDD0.d = 1.0f;
        D_0027EDD0.c = 0;
        D_0027EDD0.b = 0;
    }
}
