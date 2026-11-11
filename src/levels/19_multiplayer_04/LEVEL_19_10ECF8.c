typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0029FCF8;

void func_10ECF8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0029FCF8.a = 0;
        D_0029FCF8.d = 1.0f;
        D_0029FCF8.c = 0;
        D_0029FCF8.b = 0;
    }
}
