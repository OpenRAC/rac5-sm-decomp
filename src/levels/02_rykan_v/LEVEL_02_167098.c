/* LEVEL_02:0x167098 -- walks the eight 0x1C-byte slots of the owner's table and fires the helper for every live entry in state 0x16 that passes the probe. */
typedef struct {
    char pad_00[0x45];
    unsigned char state;
} Ent;

typedef struct {
    Ent *e;
    char pad_04[24];
} Slot;

typedef struct {
    char pad_00[0x54];
    Slot *slots;
} Holder;

typedef struct {
    Holder *holder;
    int probe;
} Link;

typedef struct {
    char pad_00[0x54];
    Link *link;
} Obj;

extern int func_08B060(int probe, void *at);
extern void func_1698B8(Ent *e, int state, int code);

void func_167098(Obj *o)
{
    Link *link = o->link;
    unsigned int i = 0;
    Slot *s;
    Ent *e;

    do {
        s = link->holder->slots + (i & 0xFF);
        e = s->e;
        i++;
        if (e != 0 && e->state == 0x16 && func_08B060(link->probe, (char *)e + 0x30) != 0) {
            func_1698B8(e, e->state, 6);
        }
    } while (i < 8);
}
