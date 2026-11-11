/* LEVEL_16:0x16C2B0 -- drains the sub-record timer and trips the event. */
typedef struct {
    char pad0[0x18];
    float f_18;
} Sub;

typedef struct {
    char pad0[0x54];
    Sub *p_54;
    void *p_58;
} Obj;

extern void func_16C8C0(void *self, int handle);

void func_16C2B0(Obj *self)
{
    Sub *a = self->p_54;
    int h = *(int *)self->p_58;
    float v = a->f_18 - 1.0f;

    a->f_18 = v;
    if (v <= 0.0f)
        func_16C8C0(self, h);
}
