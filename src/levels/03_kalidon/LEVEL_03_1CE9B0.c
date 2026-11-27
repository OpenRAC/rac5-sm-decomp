/* LEVEL_03:0x1CE9B0 -- initialises the object's record: sets the mode field, clears the record, marks the object, and (unless the object is in state 4) asks the link whether to proceed, stores the link's probe result and, when the link has a slot, seeds the record's scale and level from the global table. */
extern void *memset(void *, int, unsigned int);

typedef struct {
    char pad00[4];
    int w4;
    char pad08[8];
    int w10;
    char pad14[1];
} Link;

typedef struct {
    char pad00[0x60];
    float f60;
    float f64;
    unsigned char b68;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char b45;
    char pad46[0x54 - 0x46];
    Link *link;
    Rec *rec;
    char pad5C[0x64 - 0x5C];
    unsigned int flags;
    char pad68[0x78 - 0x68];
    unsigned int w78;
} Obj;

extern float D_00232D00[];
extern int D_002336F0;
extern int func_1D0ED8(Obj *o);
extern int func_168260(int a, Obj *o, void *p, float f0, float f1);
extern long long func_028170(void);

int func_1CE9B0(Obj *o)
{
    Rec *rec;
    Link *link;
    char *base;
    int value;

    rec = o->rec;
    o->w78 = (o->w78 & 0xFFF0FFFFu) | 0x20000u;
    memset(rec, 0, 0x70);
    o->flags = o->flags | 0x1000;
    if (o->b45 == 4)
        return 1;
    link = o->link;
    if (func_1D0ED8(o) == 0)
        return 0;
    if (link->w10 == 0)
        return 0;
    rec->b68 = func_168260(link->w10, o, (char *)link + 0x14, 0.699999988079071f, 1.2000000476837158f);
    if (link->w4 == 0)
        return 0;
    base = (char *)D_00232D00;
    value = ((int (*)(void))func_028170)();
    rec->f60 = *(float *)(base + ((value << 4) + ((D_002336F0 - 1) << 6)));
    rec->f64 = 1.5f;
    return 1;
}
