/* LEVEL_16:0x163AE8 -- set a float field of a global object to 1.0f and
   clear its three integer fields, when the second argument asks for it. */
typedef struct {
    int a;
    int b;
    int c;
    float f;
} Obj;

extern Obj D_002E5390;

void func_163AE8(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_002E5390.a = 0;
        D_002E5390.f = 1.0f;
        D_002E5390.c = 0;
        D_002E5390.b = 0;
    }
}
