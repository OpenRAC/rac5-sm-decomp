typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002E5F78;

void func_194CF0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002E5F78.a = 0;
        D_002E5F78.d = 1.0f;
        D_002E5F78.c = 0;
        D_002E5F78.b = 0;
    }
}
