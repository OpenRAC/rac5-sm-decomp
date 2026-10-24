typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0037E268;

void func_17EBE8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0037E268.a = 0;
        D_0037E268.d = 1.0f;
        D_0037E268.c = 0;
        D_0037E268.b = 0;
    }
}
