typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001DE010;

void func_06C6E0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001DE010.a = 0;
        D_001DE010.d = 1.0f;
        D_001DE010.c = 0;
        D_001DE010.b = 0;
    }
}
