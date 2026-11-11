typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002E5E60;

void func_18AD00(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002E5E60.a = 0;
        D_002E5E60.d = 1.0f;
        D_002E5E60.c = 0;
        D_002E5E60.b = 0;
    }
}
