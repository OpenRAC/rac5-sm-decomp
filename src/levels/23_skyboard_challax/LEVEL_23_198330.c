typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00366608;

void func_198330(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00366608.a = 0;
        D_00366608.d = 1.0f;
        D_00366608.c = 0;
        D_00366608.b = 0;
    }
}
