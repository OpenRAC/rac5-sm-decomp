typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00353CA0;

void func_129650(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00353CA0.a = 0;
        D_00353CA0.d = 1.0f;
        D_00353CA0.c = 0;
        D_00353CA0.b = 0;
    }
}
