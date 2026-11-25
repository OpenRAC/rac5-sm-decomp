/* LEVEL_08:0x18DEC8 -- attaches the object to the shared owner: runs the owner's registration, clears and fills the object's state record, installs the owner's handler and sets a mode in the render word; returns 1, or 0 when there is no owner. */
typedef struct {
    int w00;
    int w04;
    int w08;
    int w0C;
    int w10;
    int w14;
    char pad18[0x18];
    char pad30[0x10];
    float f40;
    unsigned char b44;
    unsigned char b45;
} State;

typedef struct {
    int w00;
    int w04;
    int w08;
    int wC;
    int w10;
    char pad14[0x10];
    int w24;
} Sub;

typedef struct {
    char pad00[0x4A];
    unsigned char b4A;
} OwnerInfo;

typedef struct {
    char pad00[0x58];
    OwnerInfo *info;
} Owner;

typedef struct {
    Owner *owner;
} Link;

typedef struct {
    char pad00[0xE0];
    void *handler;
} Slot;

typedef struct {
    char pad00[0x48];
    Slot *slot;
    char pad4C[8];
    Link *link;
    State *state;
    char pad5C[0x1C];
    unsigned int w78;
} Obj;

extern char D_0026C6E0[];
extern void func_0FB190(int a);
extern void func_1F9D08(Owner *o, Obj *obj, char *p, int a);
extern float func_084B98(Obj *obj, int a);
extern void func_18E418(void);

int func_18DEC8(Obj *o)
{
    Link *link;
    State *s;
    Sub *sub;
    int idx;

    func_0FB190(0);
    link = o->link;
    if (link->owner == 0) {
        return 0;
    }
    func_1F9D08(link->owner, o, D_0026C6E0, 0);
    s = o->state;
    s->b44 = 5;
    s->f40 = 25.0f;
    s->w00 = 0;
    s->w04 = 0;
    s->w08 = 0;
    s->w0C = 0;
    s->w10 = 0;
    s->w14 = 0;
    idx = link->owner->info->b4A;
    link->owner->info->b4A = idx + 1;
    s->b45 = idx;
    o->slot->handler = (void *)func_18E418;
    func_084B98(o, 5);
    o->w78 = (o->w78 & 0xFFF0FFFF) | 0x20000;
    sub = (Sub *)((char *)s + 0x18);
    sub->wC = 0;
    sub->w10 = 0;
    sub->w24 = 0;
    return 1;
}
