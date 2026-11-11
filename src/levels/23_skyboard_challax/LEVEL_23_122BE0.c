/* LEVEL_23:122BE0 -- forwards four floats of a global object to a named
   routine, together with eight integer arguments. */
typedef struct {
    char pad[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Obj;

extern Obj *D_001DA32C;

void func_077DD0(int b0, int b1, int b2, int b3, int b4, int b5, int b6, int b7,
                 float c0, float c1, float c2, float c3);

void func_122BE0(int a0, int a1)
{
    Obj *p = D_001DA32C;

    if (p) {
        func_077DD0(a0, p, 0, 0, 0, 0, 0, 1,
                    p->f_14, p->f_18, p->f_1C, p->f_20);
    }
}
