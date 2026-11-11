typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003AECF0;

void func_1A7100(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003AECF0.a = 0;
        D_003AECF0.d = 1.0f;
        D_003AECF0.c = 0;
        D_003AECF0.b = 0;
    }
}
