typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002832D8;

void func_0D3B68(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002832D8.a = 0;
        D_002832D8.d = 1.0f;
        D_002832D8.c = 0;
        D_002832D8.b = 0;
    }
}
