/* Change the object's selected state and notify both virtual controllers. */
typedef struct Sub Sub;
typedef struct Method { short adjust; short pad; void (*call)(void *, Sub *); } Method;
typedef struct Controller { Method *table; } Controller;
struct Sub { unsigned char pad[0x44]; int selected; Controller *current; Controller *slots[0]; };
static inline void invoke(Controller *controller, int slot, Sub *owner)
{
    Method *method=&controller->table[slot];
    method->call((unsigned char *)controller+method->adjust,owner);
}
void func_1743F0(Sub *object, int index)
{
    Controller *old = object->current;
    invoke(old,4,object);
    object->selected = index;
    object->current = object->slots[index];
    invoke(object->current,3,object);
}
