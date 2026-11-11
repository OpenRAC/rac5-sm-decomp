typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0039AB10;

void func_133460(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0039AB10.a = 0;
        D_0039AB10.d = 1.0f;
        D_0039AB10.c = 0;
        D_0039AB10.b = 0;
    }
}
