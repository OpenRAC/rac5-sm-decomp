typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003E7FF0;

void func_1B7EB0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003E7FF0.a = 0;
        D_003E7FF0.d = 1.0f;
        D_003E7FF0.c = 0;
        D_003E7FF0.b = 0;
    }
}
