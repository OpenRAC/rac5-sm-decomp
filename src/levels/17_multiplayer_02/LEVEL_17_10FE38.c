typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002C6F80;

void func_10FE38(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002C6F80.a = 0;
        D_002C6F80.d = 1.0f;
        D_002C6F80.c = 0;
        D_002C6F80.b = 0;
    }
}
