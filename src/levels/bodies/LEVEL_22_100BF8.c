typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002A7260;

void func_100BF8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002A7260.a = 0;
        D_002A7260.d = 1.0f;
        D_002A7260.c = 0;
        D_002A7260.b = 0;
    }
}
