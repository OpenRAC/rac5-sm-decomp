typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003B4350;

void func_1F2C28(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003B4350.a = 0;
        D_003B4350.d = 1.0f;
        D_003B4350.c = 0;
        D_003B4350.b = 0;
    }
}
