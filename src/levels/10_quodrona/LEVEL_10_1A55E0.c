/* LEVEL_10:0x1A55E0 -- runs the shared handler on the ten 0x84-byte slots of the linked record when its enable byte is set. */
typedef struct Slot {
    char pad0[0x84];
} Slot;

typedef struct Link {
    char pad0[4];
    Slot slots[10];
    char pad[0x588 - 4 - 10 * 0x84];
    unsigned char enabled;
} Link;

typedef struct Obj {
    char pad0[0x58];
    Link *link;
} Obj;

extern void func_108F08(Slot *s);

void func_1A55E0(Obj *o)
{
    Link *l = o->link;
    Slot *s;
    int i;
    int n;

    if (l->enabled) {
        s = l->slots;
        for (i = 0; i < 10; i = n) {
            func_108F08(s);
            n = i + 1;
            s++;
        }
    }
}
