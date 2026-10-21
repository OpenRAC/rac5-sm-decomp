/* LEVEL_15:0x0934C0 -- set a float field of a global object to 1.0f and
   clear its three integer fields, when the second argument asks for it. */
typedef struct {
    int a;
    int b;
    int c;
    float f;
} Obj;

extern Obj D_0023FA38;

void func_0934C0(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0023FA38.a = 0;
        D_0023FA38.f = 1.0f;
        D_0023FA38.c = 0;
        D_0023FA38.b = 0;
    }
}
