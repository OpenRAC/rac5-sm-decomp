typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002D3D90;

void func_124D18(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002D3D90.a = 0;
        D_002D3D90.d = 1.0f;
        D_002D3D90.c = 0;
        D_002D3D90.b = 0;
    }
}
