typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00384DD0;

void func_1A7518(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00384DD0.a = 0;
        D_00384DD0.d = 1.0f;
        D_00384DD0.c = 0;
        D_00384DD0.b = 0;
    }
}
