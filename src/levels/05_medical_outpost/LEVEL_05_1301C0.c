typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00373CB0;

void func_1301C0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00373CB0.a = 0;
        D_00373CB0.d = 1.0f;
        D_00373CB0.c = 0;
        D_00373CB0.b = 0;
    }
}
