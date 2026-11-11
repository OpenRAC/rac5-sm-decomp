typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0027F7E0;

void func_0F1290(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0027F7E0.a = 0;
        D_0027F7E0.d = 1.0f;
        D_0027F7E0.c = 0;
        D_0027F7E0.b = 0;
    }
}
