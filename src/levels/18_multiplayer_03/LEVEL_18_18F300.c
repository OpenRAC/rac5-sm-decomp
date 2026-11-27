/* LEVEL_18:0x18F300 -- advances a timer field and trips the event once it runs
   past five seconds. */
extern float D_1E09AC;

typedef struct {
    char pad[0x70];
    float f_70;
} Obj;

extern void func_06F008(Obj *self);

int func_18F300(Obj *self)
{
    float v = self->f_70 + D_1E09AC;

    self->f_70 = v;
    if (v > 5.0f) {
        ((void (*)(Obj *self, int flag))func_06F008)(self, 1);
        return 1;
    }
    return 0;
}
