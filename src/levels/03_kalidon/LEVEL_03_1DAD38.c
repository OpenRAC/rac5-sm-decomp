typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003B3900;

void func_1DAD38(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003B3900.a = 0;
        D_003B3900.d = 1.0f;
        D_003B3900.c = 0;
        D_003B3900.b = 0;
    }
}
