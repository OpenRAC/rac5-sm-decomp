/* LEVEL_15:0x02FEF0 -- clears three fields unless the state is in the set that keeps each of them. */
struct Obj {
    char pad0[0x100];
    short state;
    char pad102[0x32];
    int f134;
    int f138;
    char pad13C[0x878];
    int f9B4;
};

void func_02FEF0(struct Obj *o)
{
    if (!(o->state == 4 || o->state == 0x40 || o->state == 0x36)) {
        o->f134 = 0;
    }
    if (!(o->state == 3 || o->state == 0x35 || o->state == 4 || o->state == 0x40
          || o->state == 0xE || o->state == 6 || o->state == 0x3A)) {
        o->f138 = 0;
    }
    if (!(o->state == 0x25 || o->state == 3 || o->state == 4 || o->state == 0x40
          || o->state == 0xE || o->state == 6 || o->state == 0x18 || o->state == 0x3A
          || o->state == 0xF || o->state == 0x10 || o->state == 0x11 || o->state == 0x12
          || o->state == 0x36)) {
        o->f9B4 = 0;
    }
}
