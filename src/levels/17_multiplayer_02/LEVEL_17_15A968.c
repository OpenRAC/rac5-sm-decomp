/* LEVEL_17:0x15A968 -- placement copy of LEVEL_16_163B40.c: clears the first state word, restarts the linked object and sets a 4-bit mode field in the flag word; returns 1. */
typedef struct {
    int word0;
} State;

typedef struct {
    char pad0[0x48];
    void *link;
    char pad4C[0x58 - 0x4C];
    State *state;
    char pad5C[0x78 - 0x5C];
    unsigned int flags;
} Obj;

extern void func_07E248(void *link, int a);
extern void func_07B408(void *link);

int func_15A968(Obj *o)
{
    o->state->word0 = 0;
    func_07E248(o->link, 1);
    func_07B408(o->link);
    o->flags = (o->flags & 0xFFF0FFFFu) | 0x20000u;
    return 1;
}
