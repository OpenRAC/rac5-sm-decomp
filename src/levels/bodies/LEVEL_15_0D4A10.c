/* LEVEL_15:0x0D4A10 -- set a float field of a global object to 1.0f and
   clear its three integer fields, when the second argument asks for it. */
typedef struct {
    int a;
    int b;
    int c;
    float f;
} Obj;

extern Obj D_00248D98;

void func_0D4A10(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00248D98.a = 0;
        D_00248D98.f = 1.0f;
        D_00248D98.c = 0;
        D_00248D98.b = 0;
    }
}
