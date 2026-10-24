typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002030C0;

void func_0E9480(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002030C0.a = 0;
        D_002030C0.d = 1.0f;
        D_002030C0.c = 0;
        D_002030C0.b = 0;
    }
}
