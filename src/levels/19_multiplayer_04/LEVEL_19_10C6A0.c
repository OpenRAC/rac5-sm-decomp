typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0029F9F0;

void func_10C6A0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0029F9F0.a = 0;
        D_0029F9F0.d = 1.0f;
        D_0029F9F0.c = 0;
        D_0029F9F0.b = 0;
    }
}
