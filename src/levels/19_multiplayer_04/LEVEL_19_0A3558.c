typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00276578;

void func_0A3558(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00276578.a = 0;
        D_00276578.d = 1.0f;
        D_00276578.c = 0;
        D_00276578.b = 0;
    }
}
