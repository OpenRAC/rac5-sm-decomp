typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00255110;

void func_079308(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00255110.a = 0;
        D_00255110.d = 1.0f;
        D_00255110.c = 0;
        D_00255110.b = 0;
    }
}
