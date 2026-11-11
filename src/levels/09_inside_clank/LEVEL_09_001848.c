typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00213050;

void func_001848(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00213050.a = 0;
        D_00213050.d = 1.0f;
        D_00213050.c = 0;
        D_00213050.b = 0;
    }
}
