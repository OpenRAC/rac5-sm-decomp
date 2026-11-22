/* USA LEVEL_04.REL:0x17A1C8 (21 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_1E13F8 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct {
    char pad[0x44];
} Obj07CC28;

typedef struct {
    char pad_00[0x58];
    char *f_58;
} Outer;

typedef struct {
    char pad_00[0x64];
    int f_64;
} Target;

typedef void (*Hook)(Target *a0, int a1);

typedef struct Link {
    int entry;
    int count;
} Link;

typedef struct Owner {
    char pad_00[0xDC];
    void (*cb_a)(void);
    void (*cb_b)(void);
} Owner;

typedef struct Obj {
    char pad_00[0x48];
    Owner *owner;
    char pad_4C[0x54 - 0x4C];
    Link *link;
    char *data;
    char pad_5C[0x78 - 0x5C];
    unsigned int flags;
} Obj;

typedef struct Data {
    char pad_00[0xD1];
    unsigned char bD1;
    char pad_D2[0xE0 - 0xD2];
    char block_a[0xEC - 0xE0];
    int wEC;
    int wF0;
    int wF4;
    char block_b[0x154 - 0xF8];
    float f154;
    unsigned int w158;
} Data;

extern char *D_002201B4;
extern char D_0023A5A8[];
extern char D_003B0618[];
extern void *memset(void *, int, unsigned int);
extern void func_17A970(void);
extern void func_17A920(void);
extern void func_1E13F8(char *d, Obj *o, char *tab);
extern void func_1F0B30(char *object);
extern void func_1E7598(char *record);
extern float func_080088(Obj07CC28 *o, unsigned int idx);
extern void func_1D4D88(Outer *a0, Target *a1, Hook *a2, int a3);

static __inline__ int Reloc(int *slot)
{
    int off;
    char *e;

    off = *slot;
    if (off == 0) {
        return 0;
    }
    e = D_002201B4 + off;
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

int func_17A1C8(Obj *o)
{
    Data *d;
    Link *link;
    unsigned char *counter;
    unsigned int old;

    d = (Data *)o->data;
    memset(d, 0, 0x160);
    link = o->link;
    if (!Reloc(&link->entry)) {
        return 0;
    }
    if (!(link->count < 3)) {
        return 0;
    }
    func_1E13F8((char *)d, o, D_0023A5A8);
    func_1F0B30((char *)d + 0xE0);
    Zero3(&d->wEC);
    func_1E7598((char *)d + 0xF8);
    d->bD1 = 0;
    func_080088((Obj07CC28 *)o, 0);
    func_1D4D88((Outer *)link->entry, (Target *)o, (Hook *)D_003B0618, 0);
    counter = (unsigned char *)(((Outer *)link->entry)->f_58 + 0x4A);
    old = *counter;
    *counter = old + 1;
    d->w158 = old;
    o->owner->cb_a = func_17A970;
    o->owner->cb_b = func_17A920;
    d->f154 = 20.0f;
    o->flags = (o->flags & 0xFFF0FFFF) | 0x20000;
    return 1;
}
