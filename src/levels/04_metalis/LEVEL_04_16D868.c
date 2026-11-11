typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003AF5D8;

void func_16D868(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003AF5D8.a = 0;
        D_003AF5D8.d = 1.0f;
        D_003AF5D8.c = 0;
        D_003AF5D8.b = 0;
    }
}
