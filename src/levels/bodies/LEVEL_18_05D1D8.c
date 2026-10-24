typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001EBCA8;

void func_05D1D8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001EBCA8.a = 0;
        D_001EBCA8.d = 1.0f;
        D_001EBCA8.c = 0;
        D_001EBCA8.b = 0;
    }
}
