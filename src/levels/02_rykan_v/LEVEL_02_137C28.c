typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003691D8;

void func_137C28(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003691D8.a = 0;
        D_003691D8.d = 1.0f;
        D_003691D8.c = 0;
        D_003691D8.b = 0;
    }
}
