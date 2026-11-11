/* LEVEL_06:0x045670 -- hands the sub-record and its timer to func_045610. */
typedef struct {
    char pad_00[0x23C];
    float f_23C;
} Obj;

extern void func_045610(Obj *o, void *p, float f);

void func_045670(Obj *a0)
{
    func_045610(a0, (char *)a0 + 0x200, a0->f_23C);
}
