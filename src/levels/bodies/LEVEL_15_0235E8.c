/* LEVEL_15:0x0235E8 -- set a float field of a global object to 1.0f and
   clear its three integer fields, when the second argument asks for it. */
typedef struct {
    int a;
    int b;
    int c;
    float f;
} Obj;

extern Obj D_00179108;

void func_0235E8(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00179108.a = 0;
        D_00179108.f = 1.0f;
        D_00179108.c = 0;
        D_00179108.b = 0;
    }
}
