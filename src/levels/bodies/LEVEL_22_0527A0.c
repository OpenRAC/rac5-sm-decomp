typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0018AB58;

void func_0527A0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0018AB58.a = 0;
        D_0018AB58.d = 1.0f;
        D_0018AB58.c = 0;
        D_0018AB58.b = 0;
    }
}
