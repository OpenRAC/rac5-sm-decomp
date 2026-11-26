/* LEVEL_18:0x14E578 -- placement copy of LEVEL_16_14FE00.c: advances the object timer by the step and runs the timer update with the same step. */
typedef struct {
    char pad00[0x70];
    float timer;
} Obj;

extern void func_14E5A8(Obj *o, float dt);

void func_14E578(Obj *o, float dt)
{
    o->timer += dt;
    func_14E5A8(o, dt);
}
