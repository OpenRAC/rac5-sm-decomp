typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003ADF90;

void func_192220(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003ADF90.a = 0;
        D_003ADF90.d = 1.0f;
        D_003ADF90.c = 0;
        D_003ADF90.b = 0;
    }
}
