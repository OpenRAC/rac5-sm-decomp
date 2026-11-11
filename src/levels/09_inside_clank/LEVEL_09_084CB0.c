typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00222A80;

void func_084CB0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00222A80.a = 0;
        D_00222A80.d = 1.0f;
        D_00222A80.c = 0;
        D_00222A80.b = 0;
    }
}
