typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00276778;

void func_0A2CD8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00276778.a = 0;
        D_00276778.d = 1.0f;
        D_00276778.c = 0;
        D_00276778.b = 0;
    }
}
