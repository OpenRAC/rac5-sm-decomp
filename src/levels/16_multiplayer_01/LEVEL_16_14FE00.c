/* LEVEL_16:0x14FE00 -- advances the object timer by the step and runs the timer update with the same step. */
typedef struct {
    char pad00[0x70];
    float timer;
} Obj;

extern void func_14FE30(Obj *o, float dt);

void func_14FE00(Obj *o, float dt)
{
    o->timer += dt;
    func_14FE30(o, dt);
}
