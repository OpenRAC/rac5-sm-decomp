typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00282378;

void func_03A8D8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00282378.a = 0;
        D_00282378.d = 1.0f;
        D_00282378.c = 0;
        D_00282378.b = 0;
    }
}
