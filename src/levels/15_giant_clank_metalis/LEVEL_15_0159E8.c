/* LEVEL_15:0x0159E8 -- set a float field of a global object to 1.0f and
   clear its three integer fields, when the second argument asks for it. */
typedef struct {
    int a;
    int b;
    int c;
    float f;
} Obj;

extern Obj D_001779F0;

void func_0159E8(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_001779F0.a = 0;
        D_001779F0.f = 1.0f;
        D_001779F0.c = 0;
        D_001779F0.b = 0;
    }
}
