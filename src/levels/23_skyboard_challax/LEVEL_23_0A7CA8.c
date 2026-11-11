typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002EE9D0;

void func_0A7CA8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002EE9D0.a = 0;
        D_002EE9D0.d = 1.0f;
        D_002EE9D0.c = 0;
        D_002EE9D0.b = 0;
    }
}
