typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003E6BE0;

void func_191B58(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003E6BE0.a = 0;
        D_003E6BE0.d = 1.0f;
        D_003E6BE0.c = 0;
        D_003E6BE0.b = 0;
    }
}
