typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0028BD60;

void func_09D2F8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0028BD60.a = 0;
        D_0028BD60.d = 1.0f;
        D_0028BD60.c = 0;
        D_0028BD60.b = 0;
    }
}
