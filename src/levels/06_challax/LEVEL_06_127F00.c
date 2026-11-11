typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0033EA58;

void func_127F00(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0033EA58.a = 0;
        D_0033EA58.d = 1.0f;
        D_0033EA58.c = 0;
        D_0033EA58.b = 0;
    }
}
