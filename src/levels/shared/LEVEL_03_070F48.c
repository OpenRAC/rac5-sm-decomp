/* LEVEL_03:0x070F48 -- set a float field of a global object to 1.0f and
   clear its three integer fields, when the second argument asks for it. */
typedef struct {
    int a;
    int b;
    int c;
    float f;
} Obj;

extern Obj D_00254BB0;

void func_070F48(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00254BB0.a = 0;
        D_00254BB0.f = 1.0f;
        D_00254BB0.c = 0;
        D_00254BB0.b = 0;
    }
}
