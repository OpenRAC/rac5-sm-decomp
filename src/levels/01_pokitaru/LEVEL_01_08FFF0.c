typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0025A160;

void func_08FFF0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0025A160.a = 0;
        D_0025A160.d = 1.0f;
        D_0025A160.c = 0;
        D_0025A160.b = 0;
    }
}
