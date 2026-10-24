typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001DE758;

void func_012780(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001DE758.a = 0;
        D_001DE758.d = 1.0f;
        D_001DE758.c = 0;
        D_001DE758.b = 0;
    }
}
