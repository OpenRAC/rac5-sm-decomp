/* LEVEL_15:0x02E6D0 -- placement copy of LEVEL_02_03E850.c: when the owner has a target, notifies the owner and
   hands the target to the object. */
typedef struct {
    char pad[0xE4];
    void *target;
} Owner;

typedef struct {
    char pad[0x48];
    Owner *owner;
} Obj;

extern void func_06D9F8(Owner *owner, int value);
extern void func_02E598(Obj *obj, void *target);

void func_02E6D0(Obj *obj)
{
    Owner *owner = obj->owner;
    void *target = owner->target;

    if (target) {
        func_06D9F8(owner, 1);
        func_02E598(obj, target);
    }
}
