typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002E4A70;

void func_13C560(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002E4A70.a = 0;
        D_002E4A70.d = 1.0f;
        D_002E4A70.c = 0;
        D_002E4A70.b = 0;
    }
}
