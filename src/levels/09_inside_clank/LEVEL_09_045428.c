/* LEVEL_09:0x045428 -- hands the sub-record and its timer to func_0453C8. */
typedef struct {
    char pad_00[0x23C];
    float f_23C;
} Obj;

extern void func_0453C8(Obj *o, void *p, float f);

void func_045428(Obj *a0)
{
    func_0453C8(a0, (char *)a0 + 0x200, a0->f_23C);
}
