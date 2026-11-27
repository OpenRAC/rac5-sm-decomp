/* LEVEL_19:0x14CCD8 -- placement copy of LEVEL_16_14FE00.c: advances the object timer by the step and runs the timer update with the same step. */
typedef struct {
    char pad00[0x70];
    float timer;
} Obj;

extern void func_14CD08(Obj *o, float dt);

void func_14CCD8(Obj *o, float dt)
{
    o->timer += dt;
    func_14CD08(o, dt);
}
