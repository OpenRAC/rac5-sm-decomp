/* LEVEL_15:0x067E68 -- set a float field of a global object to 1.0f and
   clear its three integer fields, when the second argument asks for it. */
typedef struct {
    int a;
    int b;
    int c;
    float f;
} Obj;

extern Obj D_001828E0;

void func_067E68(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_001828E0.a = 0;
        D_001828E0.f = 1.0f;
        D_001828E0.c = 0;
        D_001828E0.b = 0;
    }
}
