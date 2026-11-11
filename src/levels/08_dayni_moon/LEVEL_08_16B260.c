typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003E2C28;

void func_16B260(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003E2C28.a = 0;
        D_003E2C28.d = 1.0f;
        D_003E2C28.c = 0;
        D_003E2C28.b = 0;
    }
}
