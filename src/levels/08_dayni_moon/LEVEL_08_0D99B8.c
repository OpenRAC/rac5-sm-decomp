typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0037BA40;

void func_0D99B8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0037BA40.a = 0;
        D_0037BA40.d = 1.0f;
        D_0037BA40.c = 0;
        D_0037BA40.b = 0;
    }
}
