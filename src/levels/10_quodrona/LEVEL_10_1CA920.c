typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003A1E98;

void func_1CA920(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003A1E98.a = 0;
        D_003A1E98.d = 1.0f;
        D_003A1E98.c = 0;
        D_003A1E98.b = 0;
    }
}
