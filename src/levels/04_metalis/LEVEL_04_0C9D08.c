typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00343AB0;

void func_0C9D08(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00343AB0.a = 0;
        D_00343AB0.d = 1.0f;
        D_00343AB0.c = 0;
        D_00343AB0.b = 0;
    }
}
