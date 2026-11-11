/* LEVEL_04:0x17C330 -- activates the object: clears its 200-byte data block, validates and relocates the linked record (fails when the entry is empty), resets the block's helpers and flags, hooks the two callbacks into the linked owner's table and returns 1. */
typedef struct {
    char pad[0x44];
} Obj07CC28;

typedef struct {
    void *f_00;
    void *f_04;
} Rec;

typedef struct {
    Rec f_00[8];
    void *f_40;
    unsigned char f_44;
    unsigned char f_45;
    unsigned char f_46;
} Tab;

typedef struct {
    char pad_00[0x58];
    Tab *f_58;
} Outer;

typedef struct {
    char pad_00[0x64];
    int f_64;
} Target;

typedef void (*Hook)(Target *a0, int a1);

typedef struct Link {
    int entry;
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
    char pad_00[0x3E];
    unsigned char b3E;
    char pad_3F[0x40 - 0x3F];
    char block_a[0x0C];
    int w4C;
    int w50;
    int w54;
    char block_b[0x64 - 0x58];
    char pad_64[0xBC - 0x64];
    float f_BC;
    unsigned int w_C0;
} Data;

extern char *D_002201B4;
extern char D_003B0678[];
extern void *memset(void *, int, unsigned int);
extern void func_17CA40(void);
extern void func_17CA90(void);
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

int func_17C330(Obj *o)
{
    Data *d;
    Link *link;
    unsigned char *counter;
    unsigned int old;

    d = (Data *)o->data;
    memset(d, 0, 0xC8);
    link = o->link;
    if (!Reloc(&link->entry)) {
        return 0;
    }
    func_1F0B30((char *)d + 0x40);
    Zero3((int *)((char *)d + 0x4C));
    func_1E7598((char *)d + 0x58);
    o->flags = (o->flags & 0xFFF0FFFF) | 0x20000;
    d->b3E = 0;
    func_080088((Obj07CC28 *)o, 0);
    func_1D4D88((Outer *)link->entry, (Target *)o, (Hook *)D_003B0678, 0);
    counter = (unsigned char *)(*(char **)(link->entry + 0x58) + 0x4A);
    old = *counter;
    *counter = old + 1;
    d->w_C0 = old;
    o->owner->cb_a = func_17CA90;
    o->owner->cb_b = func_17CA40;
    d->f_BC = 20.0f;
    return 1;
}
