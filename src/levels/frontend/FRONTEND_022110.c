typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001E59C0;

void func_022110(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001E59C0.a = 0;
        D_001E59C0.d = 1.0f;
        D_001E59C0.c = 0;
        D_001E59C0.b = 0;
    }
}
