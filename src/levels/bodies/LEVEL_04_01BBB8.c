typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0024A458;

void func_01BBB8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0024A458.a = 0;
        D_0024A458.d = 1.0f;
        D_0024A458.c = 0;
        D_0024A458.b = 0;
    }
}
