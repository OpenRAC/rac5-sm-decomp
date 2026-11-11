typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002D3E70;

void func_12B5A0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002D3E70.a = 0;
        D_002D3E70.d = 1.0f;
        D_002D3E70.c = 0;
        D_002D3E70.b = 0;
    }
}
