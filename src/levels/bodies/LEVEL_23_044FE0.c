/* LEVEL_23:0x044FE0 -- rebuilds the object's render state through the six
   setup routines. */
typedef struct {
    char pad[0x270];
    float f_270;
    char pad2[0x59C - 0x274];
    int h_59C;
} Obj;

extern void func_018DA8(void *dst);
extern void func_018DE8(Obj *self);
extern void func_018E78(void *dst, float v);
extern void func_018EA8(int mode);
extern void func_018EB8(float v);
extern void func_018EC8(int handle);

void func_044FE0(Obj *self)
{
    func_018DA8((char *)self + 0x30);
    func_018DE8(self);
    func_018E78((char *)self + 0x200, self->f_270);
    func_018EA8(1);
    func_018EB8(0.5f);
    func_018EC8(self->h_59C);
}
