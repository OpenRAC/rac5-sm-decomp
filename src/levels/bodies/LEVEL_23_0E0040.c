/* LEVEL_23:0x0E0040 -- hands the level's object to the shared code, then keeps
   the pointer and the reciprocal of its first float. */
typedef struct {
    char pad[0x14];
    float *p;
    float q;
} Obj;

extern void func_08CE30(Obj *self, int a, int b);

void func_0E0040(Obj *self, int a, float *b)
{
    func_08CE30(self, a, 1);
    self->p = b;
    self->q = 1.0f / *b;
}
