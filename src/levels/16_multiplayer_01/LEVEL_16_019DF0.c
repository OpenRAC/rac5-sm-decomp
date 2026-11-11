typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001DE8D8;

void func_019DF0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001DE8D8.a = 0;
        D_001DE8D8.d = 1.0f;
        D_001DE8D8.c = 0;
        D_001DE8D8.b = 0;
    }
}
