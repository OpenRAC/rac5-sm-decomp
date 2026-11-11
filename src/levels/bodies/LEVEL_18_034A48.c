/* LEVEL_18:0x034A48 -- placement copy of LEVEL_02_03E850.c: when the owner has a target, notifies the owner and
   hands the target to the object. */
typedef struct {
    char pad[0xE4];
    void *target;
} Owner;

typedef struct {
    char pad[0x48];
    Owner *owner;
} Obj;

extern void func_07A270(Owner *owner, int value);
extern void func_034910(Obj *obj, void *target);

void func_034A48(Obj *obj)
{
    Owner *owner = obj->owner;
    void *target = owner->target;

    if (target) {
        func_07A270(owner, 1);
        func_034910(obj, target);
    }
}
