typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00385708;

void func_1C91E8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00385708.a = 0;
        D_00385708.d = 1.0f;
        D_00385708.c = 0;
        D_00385708.b = 0;
    }
}
