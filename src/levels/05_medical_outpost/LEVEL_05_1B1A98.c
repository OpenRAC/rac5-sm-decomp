typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0038FA70;

void func_1B1A98(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0038FA70.a = 0;
        D_0038FA70.d = 1.0f;
        D_0038FA70.c = 0;
        D_0038FA70.b = 0;
    }
}
