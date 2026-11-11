typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0039F3C0;

void func_17F098(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0039F3C0.a = 0;
        D_0039F3C0.d = 1.0f;
        D_0039F3C0.c = 0;
        D_0039F3C0.b = 0;
    }
}
