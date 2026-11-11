/* LEVEL_01:0x039E08 -- placement copy of LEVEL_02_03E850.c: when the owner has a target, notifies the owner and
   hands the target to the object. */
typedef struct {
    char pad[0xE4];
    void *target;
} Owner;

typedef struct {
    char pad[0x48];
    Owner *owner;
} Obj;

extern void func_089350(Owner *owner, int value);
extern void func_039CD0(Obj *obj, void *target);

void func_039E08(Obj *obj)
{
    Owner *owner = obj->owner;
    void *target = owner->target;

    if (target) {
        func_089350(owner, 1);
        func_039CD0(obj, target);
    }
}
