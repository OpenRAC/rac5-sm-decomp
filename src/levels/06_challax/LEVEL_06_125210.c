typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0033E730;

void func_125210(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0033E730.a = 0;
        D_0033E730.d = 1.0f;
        D_0033E730.c = 0;
        D_0033E730.b = 0;
    }
}
