/* LEVEL_15.REL:0x0551E0 -- asks the helper for the current placement (two
   floats out, the third slot only addressed); on success it copies the first
   output into +0x34, flags the global, clears +0x1B8 and refreshes the
   object. The integer argument is the last one, as the retail's delay slot
   shows. */
typedef struct {
    char pad0[0x34];
    float f34;
    char pad1[0x1B8 - 0x38];
    float f1B8;
} Obj;

extern int D_001812A8;
extern int func_03BC10(void *obj, float *x, float *y, float *z,
                       float q, float r, int n);
extern void func_056180(Obj *a0);

void func_0551E0(Obj *a0)
{
    float v0 = 0.0f;
    float v1 = 0.0f;
    float v2;

    if (func_03BC10(a0, &v0, &v1, &v2, 0.0f, 0.7f, 0) == 0) {
        a0->f34 = v0;
        D_001812A8 = 5;
        a0->f1B8 = 0.0f;
        func_056180(a0);
    }
}
