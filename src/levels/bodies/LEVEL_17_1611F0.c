/* LEVEL_17:0x1611F0 -- drains the gauge and trips the event at zero. */
typedef struct {
    char pad[0x70];
    float f_70;
} Obj;

extern void func_06FF78(Obj *self, int flag);

void func_1611F0(Obj *self, float delta)
{
    float v = self->f_70 - delta;

    self->f_70 = v;
    if (v <= 0.0f)
        func_06FF78(self, 1);
}
