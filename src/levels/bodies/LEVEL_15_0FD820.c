/* LEVEL_15:0x0FD820 -- forwards the object's two floats and a step to the
   shared code. */
typedef struct {
    char pad[8];
    float f08;
    float f0C;
} Obj;

extern void func_0E6400(void *p, float a, float b, float c);

void func_0FD820(Obj *self)
{
    func_0E6400((char *)self + 0x10, self->f08, self->f0C, 1.0f / 30.0f);
}
