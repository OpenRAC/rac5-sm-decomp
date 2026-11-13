/* Switch the selected controller, invoking its leave and enter virtual methods. */
typedef struct Method { short adjust; short pad; void (*call)(void *); } Method;
typedef struct Controller { Method *table; } Controller;
typedef struct Manager { unsigned char pad[0x64]; int selected; Controller *current; Controller *slots[0]; } Manager;
extern Manager D_002F4F88;
static inline void invoke(Controller *controller, int slot)
{
    Method *method=&controller->table[slot];
    method->call((unsigned char *)controller+method->adjust);
}
void func_136478(int index)
{
    Manager *manager = &D_002F4F88;
    Controller *old = manager->current;
    invoke(old,4);
    manager->selected = index;
    manager->current = manager->slots[index];
    invoke(manager->current,3);
}
