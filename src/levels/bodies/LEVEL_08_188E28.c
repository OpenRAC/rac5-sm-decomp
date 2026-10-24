typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003E5BD8;

void func_188E28(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003E5BD8.a = 0;
        D_003E5BD8.d = 1.0f;
        D_003E5BD8.c = 0;
        D_003E5BD8.b = 0;
    }
}
