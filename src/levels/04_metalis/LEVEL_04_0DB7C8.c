typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003477C8;

void func_0DB7C8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003477C8.a = 0;
        D_003477C8.d = 1.0f;
        D_003477C8.c = 0;
        D_003477C8.b = 0;
    }
}
