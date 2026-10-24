/* LEVEL_09:0x190DE8 -- drains the gauge and trips the event at zero. */
typedef struct {
    char pad[0x70];
    float f_70;
} Obj;

extern void func_079108(Obj *self, int flag);

void func_190DE8(Obj *self, float delta)
{
    float v = self->f_70 - delta;

    self->f_70 = v;
    if (v <= 0.0f)
        func_079108(self, 1);
}
