/* LEVEL_15:0x03AF30 -- hands the object and one of its floats to the shared
   code. */
typedef struct {
    char pad[0x23C];
    float f;
} Obj;

extern void func_03AED0(Obj *self, void *b, float v);

void func_03AF30(Obj *self)
{
    func_03AED0(self, (char *)self + 0x200, self->f);
}
