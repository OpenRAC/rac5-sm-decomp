typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00143248;

void func_057330(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00143248.a = 0;
        D_00143248.d = 1.0f;
        D_00143248.c = 0;
        D_00143248.b = 0;
    }
}
