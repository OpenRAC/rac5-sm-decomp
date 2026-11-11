typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0027F4F8;

void func_0E7BA8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0027F4F8.a = 0;
        D_0027F4F8.d = 1.0f;
        D_0027F4F8.c = 0;
        D_0027F4F8.b = 0;
    }
}
