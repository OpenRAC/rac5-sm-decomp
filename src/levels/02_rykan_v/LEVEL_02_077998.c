typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00250790;

void func_077998(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00250790.a = 0;
        D_00250790.d = 1.0f;
        D_00250790.c = 0;
        D_00250790.b = 0;
    }
}
