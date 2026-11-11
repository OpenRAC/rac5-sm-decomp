/* LEVEL_07:0x19A738 -- tears the object down: frees the registration slot, releases the sound handle, then clears the four embedded parts and finishes with func_019C98. */
struct Slot {
    char pad0[0x68];
};

struct P19338;

struct State {
    unsigned short h0;
    char pad2;
    unsigned char b3;
    char pad4[0x34];
    char parts[4][0x40];
    char *f138;
};

struct Obj {
    char pad0[0x58];
    struct State *f58;
};

extern struct Slot D_00244FF8[];
extern void func_0976E0(struct Slot *s, unsigned int index);
extern void func_082CA0(char *record);
extern void func_1EF1E0(char *part);
extern void func_019C98(struct P19338 *p);

void func_19A738(struct Obj *o)
{
    struct State *s = o->f58;
    int oa;
    struct Slot *old;
    char *p;
    unsigned int i;

    oa = s->b3 * 0x68;
    oa += (int)D_00244FF8;
    old = (struct Slot *)oa;
    if (s->h0 != 0xFFFF) {
        func_0976E0(old, s->h0);
        s->h0 = 0xFFFF;
    }
    if (s->f138 != 0) {
        func_082CA0(s->f138);
        s->f138 = 0;
    }
    p = s->parts[0];
    i = 0;
    do {
        func_1EF1E0(p);
        i++;
        p += 0x40;
    } while (i < 4);
    func_019C98((struct P19338 *)o);
}
