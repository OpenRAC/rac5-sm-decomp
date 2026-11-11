/* LEVEL_03:0x038048 -- placement copy of LEVEL_02_03E850.c: when the owner has a target, notifies the owner and
   hands the target to the object. */
typedef struct {
    char pad[0xE4];
    void *target;
} Owner;

typedef struct {
    char pad[0x48];
    Owner *owner;
} Obj;

extern void func_089170(Owner *owner, int value);
extern void func_037F10(Obj *obj, void *target);

void func_038048(Obj *obj)
{
    Owner *owner = obj->owner;
    void *target = owner->target;

    if (target) {
        func_089170(owner, 1);
        func_037F10(obj, target);
    }
}
