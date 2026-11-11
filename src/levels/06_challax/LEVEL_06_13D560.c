typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0037E7E8;

void func_13D560(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0037E7E8.a = 0;
        D_0037E7E8.d = 1.0f;
        D_0037E7E8.c = 0;
        D_0037E7E8.b = 0;
    }
}
