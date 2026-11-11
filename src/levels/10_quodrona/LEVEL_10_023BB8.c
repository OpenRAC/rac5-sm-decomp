typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00239078;

void func_023BB8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00239078.a = 0;
        D_00239078.d = 1.0f;
        D_00239078.c = 0;
        D_00239078.b = 0;
    }
}
