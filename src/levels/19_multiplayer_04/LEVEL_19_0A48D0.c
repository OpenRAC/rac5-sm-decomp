typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00276690;

void func_0A48D0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00276690.a = 0;
        D_00276690.d = 1.0f;
        D_00276690.c = 0;
        D_00276690.b = 0;
    }
}
