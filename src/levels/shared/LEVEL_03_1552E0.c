/* LEVEL_03:0x1552E0 -- set a float field of a global object to 1.0f and
   clear its three integer fields, when the second argument asks for it. */
typedef struct {
    int a;
    int b;
    int c;
    float f;
} Obj;

extern Obj D_003AE768;

void func_1552E0(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_003AE768.a = 0;
        D_003AE768.f = 1.0f;
        D_003AE768.c = 0;
        D_003AE768.b = 0;
    }
}
