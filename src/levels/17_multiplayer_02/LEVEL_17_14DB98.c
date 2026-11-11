/* LEVEL_17:0x14DB98 -- adds a time step to a nested field and to the object's own field, then runs an update helper. */
typedef struct {
    char pad00[0x34];
    float f34;
} Nested;

typedef struct {
    char pad00[0x58];
    Nested *nested;
    char pad5C[0x14];
    float f70;
} Obj;

extern void func_14DCA8(void *o, float dt);

void func_14DB98(Obj *o, float dt)
{
    o->nested->f34 = o->nested->f34 + dt;
    o->f70 = o->f70 + dt;
    func_14DCA8(o, dt);
}
