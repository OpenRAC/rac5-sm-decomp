/* LEVEL_02:0x17A7C0 -- resets an object's state: clears its two linked words and byte 0x45, drops two flag bits and marks word 0x68 as unassigned. */
typedef struct {
    char pad0[0x45];
    unsigned char b45;
    char pad46[0x54 - 0x46];
    int *link54;
    int *link58;
    char pad5C[8];
    int flags;
    unsigned int w68;
} Obj;

int func_17A7C0(Obj *o)
{
    int *p;
    int *q;

    p = o->link54;
    q = o->link58;
    *p = 0;
    o->b45 = 0;
    o->flags &= ~0x40;
    o->flags &= ~0x08000000;
    o->w68 = 0xFFFFFFFFu;
    *q = 0;
    return 1;
}
