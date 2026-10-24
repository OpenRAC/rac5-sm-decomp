typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00219F80;

void func_02E6B0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00219F80.a = 0;
        D_00219F80.d = 1.0f;
        D_00219F80.c = 0;
        D_00219F80.b = 0;
    }
}
