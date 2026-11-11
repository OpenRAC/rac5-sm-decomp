typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0024A530;

void func_033BD0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0024A530.a = 0;
        D_0024A530.d = 1.0f;
        D_0024A530.c = 0;
        D_0024A530.b = 0;
    }
}
