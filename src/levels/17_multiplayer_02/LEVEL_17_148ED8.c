/* LEVEL_17:0x148ED8 -- placement copy of LEVEL_16_14FE00.c: advances the object timer by the step and runs the timer update with the same step. */
typedef struct {
    char pad00[0x70];
    float timer;
} Obj;

extern void func_148F08(Obj *o, float dt);

void func_148ED8(Obj *o, float dt)
{
    o->timer += dt;
    func_148F08(o, dt);
}
