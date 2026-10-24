typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002004E0;

void func_02D510(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002004E0.a = 0;
        D_002004E0.d = 1.0f;
        D_002004E0.c = 0;
        D_002004E0.b = 0;
    }
}
