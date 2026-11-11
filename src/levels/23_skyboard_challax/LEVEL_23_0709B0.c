typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00207820;

void func_0709B0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00207820.a = 0;
        D_00207820.d = 1.0f;
        D_00207820.c = 0;
        D_00207820.b = 0;
    }
}
