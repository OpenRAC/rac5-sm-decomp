/* LEVEL.REL:048F48 -- hands the record at 0x200 and the
   float at 0x23C of the object to func_048EE8. */
typedef struct {
    char pad_00[0x23C];
    float f_23C;
} Obj;

extern void func_048EE8(Obj *a0, void *a1, float a2);

void func_048F48(Obj *a0)
{
    func_048EE8(a0, (char *)a0 + 0x200, a0->f_23C);
}
