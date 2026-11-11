typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00204B98;

void func_0F1368(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00204B98.a = 0;
        D_00204B98.d = 1.0f;
        D_00204B98.c = 0;
        D_00204B98.b = 0;
    }
}
