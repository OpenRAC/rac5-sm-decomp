/* LEVEL_15:0x0CC400 -- set a float field of a global object to 1.0f and
   clear its three integer fields, when the second argument asks for it. */
typedef struct {
    int a;
    int b;
    int c;
    float f;
} Obj;

extern Obj D_00248C78;

void func_0CC400(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00248C78.a = 0;
        D_00248C78.f = 1.0f;
        D_00248C78.c = 0;
        D_00248C78.b = 0;
    }
}
