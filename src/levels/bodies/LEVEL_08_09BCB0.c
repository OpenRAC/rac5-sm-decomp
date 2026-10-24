typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002E7380;

void func_09BCB0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002E7380.a = 0;
        D_002E7380.d = 1.0f;
        D_002E7380.c = 0;
        D_002E7380.b = 0;
    }
}
