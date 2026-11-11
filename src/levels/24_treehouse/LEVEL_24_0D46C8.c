typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002F94B0;

void func_0D46C8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002F94B0.a = 0;
        D_002F94B0.d = 1.0f;
        D_002F94B0.c = 0;
        D_002F94B0.b = 0;
    }
}
