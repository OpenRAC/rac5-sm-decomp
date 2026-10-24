typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0035F718;

void func_14BCB8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0035F718.a = 0;
        D_0035F718.d = 1.0f;
        D_0035F718.c = 0;
        D_0035F718.b = 0;
    }
}
