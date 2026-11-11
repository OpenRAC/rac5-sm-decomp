typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0027F8D8;

void func_0E8AE8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0027F8D8.a = 0;
        D_0027F8D8.d = 1.0f;
        D_0027F8D8.c = 0;
        D_0027F8D8.b = 0;
    }
}
