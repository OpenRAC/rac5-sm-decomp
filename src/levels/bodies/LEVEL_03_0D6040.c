/* LEVEL_03:0x0D6040 -- set a float field of a global object to 1.0f and
   clear its three integer fields, when the second argument asks for it. */
typedef struct {
    int a;
    int b;
    int c;
    float f;
} Obj;

extern Obj D_00347E58;

void func_0D6040(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00347E58.a = 0;
        D_00347E58.f = 1.0f;
        D_00347E58.c = 0;
        D_00347E58.b = 0;
    }
}
