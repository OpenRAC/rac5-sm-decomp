typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00313838;

void func_0B0D10(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00313838.a = 0;
        D_00313838.d = 1.0f;
        D_00313838.c = 0;
        D_00313838.b = 0;
    }
}
