typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0027F908;

void func_0E8C28(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0027F908.a = 0;
        D_0027F908.d = 1.0f;
        D_0027F908.c = 0;
        D_0027F908.b = 0;
    }
}
