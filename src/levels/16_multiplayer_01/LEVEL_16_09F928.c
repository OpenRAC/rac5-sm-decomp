typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0026B8A0;

void func_09F928(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0026B8A0.a = 0;
        D_0026B8A0.d = 1.0f;
        D_0026B8A0.c = 0;
        D_0026B8A0.b = 0;
    }
}
