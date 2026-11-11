typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002A1510;

void func_094158(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002A1510.a = 0;
        D_002A1510.d = 1.0f;
        D_002A1510.c = 0;
        D_002A1510.b = 0;
    }
}
