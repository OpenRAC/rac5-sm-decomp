typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00314340;

void func_0B2F20(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00314340.a = 0;
        D_00314340.d = 1.0f;
        D_00314340.c = 0;
        D_00314340.b = 0;
    }
}
