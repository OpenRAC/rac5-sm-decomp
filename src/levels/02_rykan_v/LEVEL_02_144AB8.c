typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003A8CD0;

void func_144AB8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003A8CD0.a = 0;
        D_003A8CD0.d = 1.0f;
        D_003A8CD0.c = 0;
        D_003A8CD0.b = 0;
    }
}
