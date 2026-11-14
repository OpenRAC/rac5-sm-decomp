/* LEVEL_02:0x1D9698 -- applies the two setup calls to the selected record, or to the default record when none is selected, missing or flagged. */
typedef struct {
    char pad0[0x64];
    unsigned int flags;
} Rec;

typedef struct {
    Rec *rec;
    int pad[3];
} Slot;

typedef struct {
    char pad0[0x54];
    Slot *slots;
} Obj;

extern char D_0024C650[];
extern void func_01AB40(void *p);
extern void func_01AB80(void *p);

void func_1D9698(Obj *o, unsigned int sel)
{
    Rec *s;
    Rec *d;
    Slot *t;

    sel &= 0xFF;
    t = o->slots;
    if (sel == 0xFF || (s = *(Rec **)((char *)t + (sel << 4))) == 0 || (s->flags & 0x20) != 0) {
        d = (Rec *)D_0024C650;
        func_01AB40((char *)d + 0x30);
        func_01AB80(d);
    } else {
        func_01AB40((char *)s + 0x30);
        func_01AB80(s);
    }
}
