typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00251310;

void func_07A990(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00251310.a = 0;
        D_00251310.d = 1.0f;
        D_00251310.c = 0;
        D_00251310.b = 0;
    }
}
