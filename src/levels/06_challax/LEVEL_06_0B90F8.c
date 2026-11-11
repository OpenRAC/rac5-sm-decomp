typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00315840;

void func_0B90F8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00315840.a = 0;
        D_00315840.d = 1.0f;
        D_00315840.c = 0;
        D_00315840.b = 0;
    }
}
