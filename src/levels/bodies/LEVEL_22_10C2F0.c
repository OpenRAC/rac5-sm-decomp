typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002E71D0;

void func_10C2F0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002E71D0.a = 0;
        D_002E71D0.d = 1.0f;
        D_002E71D0.c = 0;
        D_002E71D0.b = 0;
    }
}
