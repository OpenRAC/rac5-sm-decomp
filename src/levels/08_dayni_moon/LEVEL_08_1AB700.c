typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003E7AB8;

void func_1AB700(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003E7AB8.a = 0;
        D_003E7AB8.d = 1.0f;
        D_003E7AB8.c = 0;
        D_003E7AB8.b = 0;
    }
}
