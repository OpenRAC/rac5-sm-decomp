/* LEVEL_04:0x03B450 -- placement copy of LEVEL_02_03E850.c: when the owner has a target, notifies the owner and
   hands the target to the object. */
typedef struct {
    char pad[0xE4];
    void *target;
} Owner;

typedef struct {
    char pad[0x48];
    Owner *owner;
} Obj;

extern void func_08C620(Owner *owner, int value);
extern void func_03B318(Obj *obj, void *target);

void func_03B450(Obj *obj)
{
    Owner *owner = obj->owner;
    void *target = owner->target;

    if (target) {
        func_08C620(owner, 1);
        func_03B318(obj, target);
    }
}
