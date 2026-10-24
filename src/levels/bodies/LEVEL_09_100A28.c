typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00318E38;

void func_100A28(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00318E38.a = 0;
        D_00318E38.d = 1.0f;
        D_00318E38.c = 0;
        D_00318E38.b = 0;
    }
}
