typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00276068;

void func_0A02C0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00276068.a = 0;
        D_00276068.d = 1.0f;
        D_00276068.c = 0;
        D_00276068.b = 0;
    }
}
