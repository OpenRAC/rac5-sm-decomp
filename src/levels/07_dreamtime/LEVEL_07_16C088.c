typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003AB038;

void func_16C088(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003AB038.a = 0;
        D_003AB038.d = 1.0f;
        D_003AB038.c = 0;
        D_003AB038.b = 0;
    }
}
