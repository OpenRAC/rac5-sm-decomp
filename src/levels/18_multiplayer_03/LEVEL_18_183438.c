typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002E5B90;

void func_183438(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002E5B90.a = 0;
        D_002E5B90.d = 1.0f;
        D_002E5B90.c = 0;
        D_002E5B90.b = 0;
    }
}
