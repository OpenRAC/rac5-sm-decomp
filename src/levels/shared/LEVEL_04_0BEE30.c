/* LEVEL_04:0x0BEE30 -- set a float field of a global object to 1.0f and
   clear its three integer fields, when the second argument asks for it. */
typedef struct {
    int a;
    int b;
    int c;
    float f;
} Obj;

extern Obj D_00342F38;

void func_0BEE30(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00342F38.a = 0;
        D_00342F38.f = 1.0f;
        D_00342F38.c = 0;
        D_00342F38.b = 0;
    }
}
