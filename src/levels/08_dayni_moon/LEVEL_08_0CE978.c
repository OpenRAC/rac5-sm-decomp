typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00378410;

void func_0CE978(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00378410.a = 0;
        D_00378410.d = 1.0f;
        D_00378410.c = 0;
        D_00378410.b = 0;
    }
}
