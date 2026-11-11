typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002D3F80;

void func_136F20(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002D3F80.a = 0;
        D_002D3F80.d = 1.0f;
        D_002D3F80.c = 0;
        D_002D3F80.b = 0;
    }
}
