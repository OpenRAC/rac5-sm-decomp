typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0027B048;

void func_0C5618(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0027B048.a = 0;
        D_0027B048.d = 1.0f;
        D_0027B048.c = 0;
        D_0027B048.b = 0;
    }
}
