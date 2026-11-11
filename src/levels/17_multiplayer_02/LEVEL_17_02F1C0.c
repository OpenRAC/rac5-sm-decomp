typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001D3278;

void func_02F1C0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001D3278.a = 0;
        D_001D3278.d = 1.0f;
        D_001D3278.c = 0;
        D_001D3278.b = 0;
    }
}
