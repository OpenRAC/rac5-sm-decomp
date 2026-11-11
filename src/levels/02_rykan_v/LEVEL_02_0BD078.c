typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0033FC28;

void func_0BD078(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0033FC28.a = 0;
        D_0033FC28.d = 1.0f;
        D_0033FC28.c = 0;
        D_0033FC28.b = 0;
    }
}
