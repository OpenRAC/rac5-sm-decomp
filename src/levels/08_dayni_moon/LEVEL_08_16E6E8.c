/* LEVEL_08:0x16E6E8 -- activates the object: clears its 204-byte data block, marks it, validates and relocates the linked record (fails when the entry is empty), resets the block's helpers and flags, registers it and returns 1. */
typedef struct Link {
    int entry;
} Link;

typedef struct Obj {
    char pad_00[0x54];
    Link *link;
    char *data;
    char pad_5C[0x64 - 0x5C];
    unsigned int flags64;
    char pad_68[0x78 - 0x68];
    unsigned int flags78;
} Obj;

typedef struct Data {
    char pad_00[0x2B];
    unsigned char b2B;
    char pad_2C[0x3C - 0x2C];
    int w3C;
    int w40;
    int w44;
} Data;

extern char *D_0024FC54;
extern char D_003E2D78[];
extern void *memset(void *, int, unsigned int);
extern void func_21AEA0(char *p);
extern void func_20EE58(char *p);
extern float func_084B98(Obj *o, unsigned int idx);
extern void func_1F9D08(int entry, Obj *o, char *tab, int n);

static __inline__ int Reloc(int *slot)
{
    int off;
    char *e;

    off = *slot;
    if (off == 0) {
        return 0;
    }
    e = D_0024FC54 + off;
    if (*(int *)(e + 0x40) == 0) {
        *slot = 0;
        return 0;
    }
    *slot = (int)e;
    return 1;
}

static __inline__ void Zero3(int *p)
{
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
}

int func_16E6E8(Obj *o)
{
    Data *d;
    Link *link;

    d = (Data *)o->data;
    memset(d, 0, 0xCC);
    o->flags64 |= 0x1000;
    link = o->link;
    if (!Reloc(&link->entry)) {
        return 0;
    }
    func_21AEA0((char *)d + 0x30);
    func_20EE58((char *)d + 0x48);
    o->flags78 = (o->flags78 & 0xFFF0FFFF) | 0x20000;
    d->b2B = 0;
    func_084B98(o, 0);
    func_1F9D08(link->entry, o, D_003E2D78, 1);
    Zero3(&d->w3C);
    return 1;
}
