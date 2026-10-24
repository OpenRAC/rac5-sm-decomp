typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00377810;

void func_0C08E8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00377810.a = 0;
        D_00377810.d = 1.0f;
        D_00377810.c = 0;
        D_00377810.b = 0;
    }
}
