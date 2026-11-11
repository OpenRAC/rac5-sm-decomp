typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0029F9E0;

void func_10C098(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0029F9E0.a = 0;
        D_0029F9E0.d = 1.0f;
        D_0029F9E0.c = 0;
        D_0029F9E0.b = 0;
    }
}
