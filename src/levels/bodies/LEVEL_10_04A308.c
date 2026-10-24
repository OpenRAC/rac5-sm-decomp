/* LEVEL_10:0x04A308 -- rebuilds the object's render state through the six
   setup routines. */
typedef struct {
    char pad[0x270];
    float f_270;
    char pad2[0x59C - 0x274];
    int h_59C;
} Obj;

extern void func_0197D8(void *dst);
extern void func_019818(Obj *self);
extern void func_0198A8(void *dst, float v);
extern void func_0198D8(int mode);
extern void func_0198E8(float v);
extern void func_0198F8(int handle);

void func_04A308(Obj *self)
{
    func_0197D8((char *)self + 0x30);
    func_019818(self);
    func_0198A8((char *)self + 0x200, self->f_270);
    func_0198D8(1);
    func_0198E8(0.5f);
    func_0198F8(self->h_59C);
}
