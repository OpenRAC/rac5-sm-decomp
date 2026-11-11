typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003484B8;

void func_0DBFD0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003484B8.a = 0;
        D_003484B8.d = 1.0f;
        D_003484B8.c = 0;
        D_003484B8.b = 0;
    }
}
