typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0027F898;

void func_0E8100(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0027F898.a = 0;
        D_0027F898.d = 1.0f;
        D_0027F898.c = 0;
        D_0027F898.b = 0;
    }
}
