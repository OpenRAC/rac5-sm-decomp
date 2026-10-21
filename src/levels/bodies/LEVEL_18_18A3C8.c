/* LEVEL_18:0x18A3C8 -- set a float field of a global object to 1.0f and
   clear its three integer fields, when the second argument asks for it. */
typedef struct {
    int a;
    int b;
    int c;
    float f;
} Obj;

extern Obj D_002E5CB8;

void func_18A3C8(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_002E5CB8.a = 0;
        D_002E5CB8.f = 1.0f;
        D_002E5CB8.c = 0;
        D_002E5CB8.b = 0;
    }
}
