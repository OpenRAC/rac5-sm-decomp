/* LEVEL.REL:04E050 -- hands the record at 0x200 and the
   float at 0x23C of the object to func_04DFF0. */
typedef struct {
    char pad_00[0x23C];
    float f_23C;
} Obj;

extern void func_04DFF0(Obj *a0, void *a1, float a2);

void func_04E050(Obj *a0)
{
    func_04DFF0(a0, (char *)a0 + 0x200, a0->f_23C);
}
