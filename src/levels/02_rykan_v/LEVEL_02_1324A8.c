typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00368EA0;

void func_1324A8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00368EA0.a = 0;
        D_00368EA0.d = 1.0f;
        D_00368EA0.c = 0;
        D_00368EA0.b = 0;
    }
}
