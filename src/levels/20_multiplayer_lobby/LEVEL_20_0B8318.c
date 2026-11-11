typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0019EF48;

void func_0B8318(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0019EF48.a = 0;
        D_0019EF48.d = 1.0f;
        D_0019EF48.c = 0;
        D_0019EF48.b = 0;
    }
}
