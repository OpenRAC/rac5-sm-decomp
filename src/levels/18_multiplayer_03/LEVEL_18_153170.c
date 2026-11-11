typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002E5468;

void func_153170(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002E5468.a = 0;
        D_002E5468.d = 1.0f;
        D_002E5468.c = 0;
        D_002E5468.b = 0;
    }
}
