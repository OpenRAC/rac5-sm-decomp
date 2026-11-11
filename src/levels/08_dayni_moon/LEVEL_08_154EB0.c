typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003E0BE8;

void func_154EB0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003E0BE8.a = 0;
        D_003E0BE8.d = 1.0f;
        D_003E0BE8.c = 0;
        D_003E0BE8.b = 0;
    }
}
