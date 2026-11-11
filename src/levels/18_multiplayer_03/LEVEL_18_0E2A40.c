typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0027F838;

void func_0E2A40(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0027F838.a = 0;
        D_0027F838.d = 1.0f;
        D_0027F838.c = 0;
        D_0027F838.b = 0;
    }
}
