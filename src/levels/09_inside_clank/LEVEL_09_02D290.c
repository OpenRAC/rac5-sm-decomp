typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00219120;

void func_02D290(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00219120.a = 0;
        D_00219120.d = 1.0f;
        D_00219120.c = 0;
        D_00219120.b = 0;
    }
}
