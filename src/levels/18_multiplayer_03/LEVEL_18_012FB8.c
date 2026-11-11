typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001DE768;

void func_012FB8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001DE768.a = 0;
        D_001DE768.d = 1.0f;
        D_001DE768.c = 0;
        D_001DE768.b = 0;
    }
}
