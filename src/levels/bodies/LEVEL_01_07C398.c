/* LEVEL_01:0x07C398 -- (re)initialises an object from a template: copies the 0x40-byte head, binds its class and runs the class hooks, undoing the registration when the init hook fails. */
typedef struct Head {
    char b[0x40];
} Head;

struct Obj;

typedef struct Vt {
    char pad00[0x24];
    void (*pre)(struct Obj *o);
} Vt;

typedef struct Cls {
    char pad00[8];
    void *data;
    char pad0C[4];
    Vt *vt;
    int (*init)(struct Obj *o);
    char pad18[0x14];
    int size;
    char pad30[0xE];
    unsigned char dflt;
    char pad3F;
    unsigned short refs;
} Cls;

typedef struct Obj {
    Head head;
    Cls *cls;
    char pad44;
    unsigned char slot;
    char pad46[0xE];
    void *buf;
    char pad58[4];
    int w5C;
    int w60;
    int flags;
} Obj;

extern int D_001F615C[1];
extern void *memcpy(void *dst, const void *src, unsigned int n);
extern void func_080CD8(Obj *o);

int func_07C398(Obj *o, Obj *src, int slot)
{
    Cls *c;
    D_001F615C[0]++;
    func_080CD8(o);
    c = o->cls;
    if (src != 0) {
        o->head = src->head;
    }
    if (o->buf != 0) {
        memcpy(o->buf, c->data, c->size);
    }
    o->w5C = 0;
    o->w60 = 0;
    o->flags = 0;
    if (o->cls != 0) {
        o->cls->refs++;
    }
    o->flags |= 1;
    if (slot == 0xFF) {
        o->slot = c->dflt;
    } else {
        o->slot = slot;
    }
    if (o->cls->vt->pre != 0) {
        o->cls->vt->pre(o);
    }
    if (c->init(o) == 0) {
        if (o->flags & 1) {
            if (o->cls != 0) {
                o->cls->refs--;
            }
        }
        o->flags &= ~1;
        D_001F615C[0]--;
        return 0;
    }
    return 1;
}
