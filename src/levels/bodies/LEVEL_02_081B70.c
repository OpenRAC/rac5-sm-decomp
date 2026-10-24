typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00251B60;

void func_081B70(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00251B60.a = 0;
        D_00251B60.d = 1.0f;
        D_00251B60.c = 0;
        D_00251B60.b = 0;
    }
}
