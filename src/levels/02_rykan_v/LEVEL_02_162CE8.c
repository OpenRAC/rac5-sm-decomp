typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003AAF08;

void func_162CE8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003AAF08.a = 0;
        D_003AAF08.d = 1.0f;
        D_003AAF08.c = 0;
        D_003AAF08.b = 0;
    }
}
