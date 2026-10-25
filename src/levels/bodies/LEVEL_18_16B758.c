typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002E5780;

void func_16B758(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002E5780.a = 0;
        D_002E5780.d = 1.0f;
        D_002E5780.c = 0;
        D_002E5780.b = 0;
    }
}
