/* LEVEL_15:0x0C11F8 -- set a float field of a global object to 1.0f and
   clear its three integer fields, when the second argument asks for it. */
typedef struct {
    int a;
    int b;
    int c;
    float f;
} Obj;

extern Obj D_00244ED8;

void func_0C11F8(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00244ED8.a = 0;
        D_00244ED8.f = 1.0f;
        D_00244ED8.c = 0;
        D_00244ED8.b = 0;
    }
}
