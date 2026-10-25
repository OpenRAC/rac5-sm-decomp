typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002E2D80;

void func_13BCC8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002E2D80.a = 0;
        D_002E2D80.d = 1.0f;
        D_002E2D80.c = 0;
        D_002E2D80.b = 0;
    }
}
