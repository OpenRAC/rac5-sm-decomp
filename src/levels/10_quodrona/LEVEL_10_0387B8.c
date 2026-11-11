/* LEVEL_10:0x0387B8 -- placement copy of LEVEL_02_03E850.c: when the owner has a target, notifies the owner and
   hands the target to the object. */
typedef struct {
    char pad[0xE4];
    void *target;
} Owner;

typedef struct {
    char pad[0x48];
    Owner *owner;
} Obj;

extern void func_0896E8(Owner *owner, int value);
extern void func_038680(Obj *obj, void *target);

void func_0387B8(Obj *obj)
{
    Owner *owner = obj->owner;
    void *target = owner->target;

    if (target) {
        func_0896E8(owner, 1);
        func_038680(obj, target);
    }
}
