typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001F8D00;

void func_000B60(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001F8D00.a = 0;
        D_001F8D00.d = 1.0f;
        D_001F8D00.c = 0;
        D_001F8D00.b = 0;
    }
}
