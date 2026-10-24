typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00252800;

void func_08EC28(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00252800.a = 0;
        D_00252800.d = 1.0f;
        D_00252800.c = 0;
        D_00252800.b = 0;
    }
}
