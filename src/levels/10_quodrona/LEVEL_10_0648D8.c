typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002425A0;

void func_0648D8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002425A0.a = 0;
        D_002425A0.d = 1.0f;
        D_002425A0.c = 0;
        D_002425A0.b = 0;
    }
}
