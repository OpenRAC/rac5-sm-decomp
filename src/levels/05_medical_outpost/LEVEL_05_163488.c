typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00381BD0;

void func_163488(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00381BD0.a = 0;
        D_00381BD0.d = 1.0f;
        D_00381BD0.c = 0;
        D_00381BD0.b = 0;
    }
}
