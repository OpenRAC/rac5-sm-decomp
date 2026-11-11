typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00252CC0;

void func_08F2C8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00252CC0.a = 0;
        D_00252CC0.d = 1.0f;
        D_00252CC0.c = 0;
        D_00252CC0.b = 0;
    }
}
