typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002E1200;

void func_11CCF8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002E1200.a = 0;
        D_002E1200.d = 1.0f;
        D_002E1200.c = 0;
        D_002E1200.b = 0;
    }
}
