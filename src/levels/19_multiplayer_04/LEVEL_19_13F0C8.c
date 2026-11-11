typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002E4A90;

void func_13F0C8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002E4A90.a = 0;
        D_002E4A90.d = 1.0f;
        D_002E4A90.c = 0;
        D_002E4A90.b = 0;
    }
}
