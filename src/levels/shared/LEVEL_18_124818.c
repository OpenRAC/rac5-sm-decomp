/* LEVEL_18:0x124818 -- set a float field of a global object to 1.0f and
   clear its three integer fields, when the second argument asks for it. */
typedef struct {
    int a;
    int b;
    int c;
    float f;
} Obj;

extern Obj D_002E2E28;

void func_124818(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_002E2E28.a = 0;
        D_002E2E28.f = 1.0f;
        D_002E2E28.c = 0;
        D_002E2E28.b = 0;
    }
}
