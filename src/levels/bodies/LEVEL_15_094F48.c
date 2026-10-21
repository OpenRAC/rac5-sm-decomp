/* LEVEL_15:0x094F48 -- set a float field of a global object to 1.0f and
   clear its three integer fields, when the second argument asks for it. */
typedef struct {
    int a;
    int b;
    int c;
    float f;
} Obj;

extern Obj D_0023FB80;

void func_094F48(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0023FB80.a = 0;
        D_0023FB80.f = 1.0f;
        D_0023FB80.c = 0;
        D_0023FB80.b = 0;
    }
}
