typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001EDCF0;

void func_085540(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001EDCF0.a = 0;
        D_001EDCF0.d = 1.0f;
        D_001EDCF0.c = 0;
        D_001EDCF0.b = 0;
    }
}
