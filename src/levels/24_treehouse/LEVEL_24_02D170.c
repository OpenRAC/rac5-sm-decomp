typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001FEF70;

void func_02D170(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001FEF70.a = 0;
        D_001FEF70.d = 1.0f;
        D_001FEF70.c = 0;
        D_001FEF70.b = 0;
    }
}
