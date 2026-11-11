typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001F1FC0;

void func_0798F0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001F1FC0.a = 0;
        D_001F1FC0.d = 1.0f;
        D_001F1FC0.c = 0;
        D_001F1FC0.b = 0;
    }
}
