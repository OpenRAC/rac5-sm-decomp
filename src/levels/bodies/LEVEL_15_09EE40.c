/* LEVEL_15:0x09EE40 -- set a float field of a global object to 1.0f and
   clear its three integer fields, when the second argument asks for it. */
typedef struct {
    int a;
    int b;
    int c;
    float f;
} Obj;

extern Obj D_00240300;

void func_09EE40(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00240300.a = 0;
        D_00240300.f = 1.0f;
        D_00240300.c = 0;
        D_00240300.b = 0;
    }
}
