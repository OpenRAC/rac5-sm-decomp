/* LEVEL_04:0x0F2958 -- installs the scale record on the object, admits it
   through the base helper and stores the reciprocal of the leading value. */
typedef struct {
    char pad0[0x14];
    float *p14;
    float f18;
} Obj;

extern void func_09A5A0(Obj *, void *, int);

void func_0F2958(Obj *a0, void *a1, float *a2)
{
    func_09A5A0(a0, a1, 1);
    a0->p14 = a2;
    a0->f18 = 1.0f / a2[0];
}
