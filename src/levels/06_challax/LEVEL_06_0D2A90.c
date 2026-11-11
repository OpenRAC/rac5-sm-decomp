/* LEVEL_06.REL 0x0D2A90 -- picks one twelve-byte float triple out of the
   object's table and hands it to the shared updater. */
typedef struct {
    float f[3];
} Vec3;

typedef struct {
    char pad[0x60];
    int f60;
    int f64;
} Obj;

extern void func_0D2A18(Obj *self);

int func(Obj *self, Vec3 *dst)
{
    if (self->f60 == self->f64)
        return 0;
    if (dst == 0)
        return 0;
    *dst = *(Vec3 *)((char *)self + self->f64 * 12);
    func_0D2A18(self);
    return 1;
}
