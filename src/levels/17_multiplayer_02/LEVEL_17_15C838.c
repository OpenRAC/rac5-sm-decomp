/* LEVEL_17:0x15C838 -- puts an object into its idle state: refreshes its slot flags in the group table and, when a second object is given, resets that one's counters. */
typedef struct Rec {
    char pad00[0xC];
    int f0C;
    int f10;
    int f14;
    char pad18[0x34 - 0x18];
} Rec;

typedef struct Kind {
    char pad00[4];
    Rec *recs;
    char pad08[0x3F - 8];
    unsigned char kind;
} Kind;

typedef struct Ref {
    unsigned short idx;
    char pad02;
    unsigned char group;
} Ref;

typedef struct Body {
    int state;
    char pad04[0x30 - 4];
    Ref ref;
    char pad34[0x48 - 0x34];
    unsigned char saved;
} Body;

typedef struct Obj {
    char pad00[0x40];
    Kind *kind;
    unsigned char rec;
    unsigned char mode;
    char pad46[0x58 - 0x46];
    Body *body;
    char pad5C[8];
    unsigned int flags;
    char pad68[8];
    int f70;
} Obj;

typedef struct Other {
    char pad00[0xF4];
    int f_F4;
    char padF8[0xDD4 - 0xF8];
    int fDD4;
} Other;

typedef struct Cfg {
    char pad00[0x14];
    float a;
    float b;
    float c;
    float d;
} Cfg;

typedef struct Group {
    char pad00[0x64];
    char *slots;
} Group;

extern Cfg *D_001B1574;
extern Group D_001CF6F8[];
extern char D_002D6830[];
extern char D_001B73E0[];

extern void func_0629F8(Obj *o, char *a, char *b);
extern void func_15DEA0(Obj *o, int a);
extern void func_073C48(Obj *o, Cfg *cfg, float a, float b, float c, float d, int i0, int i1, int i2, int i3, int i4, int i5);
extern void func_037E40(Other *o, int id);
extern void func_037618(Other *o);
extern void func_079DA0(unsigned int value);
extern int func_018558(int value);
extern unsigned int func_0AA360(void);
extern void func_0AABE8(unsigned int value);

void func_15C838(Obj *self, Other *other)
{
    Body *body;
    Ref *sl;
    Rec *rec;
    Cfg *cfg;
    unsigned int base;
    unsigned int alt;
    unsigned int m;
    unsigned int u;

    body = self->body;
    func_0629F8(self, D_002D6830, D_001B73E0);
    func_15DEA0(self, 0);
    cfg = D_001B1574;
    if (cfg != 0) {
        func_073C48(self, cfg, cfg->a, cfg->b, cfg->c, cfg->d, 0, 0, 0, 0, 0, 1);
    }
    self->flags |= 0x20;
    self->mode = 2;
    self->f70 = 0;
    sl = &body->ref;
    rec = &self->kind->recs[self->rec];
    base = self->flags & 0x1420;
    alt = base | 1;
    m = base | 0x81;
    if (rec->f0C == 0) {
        m = alt;
    }
    if (rec->f10 != 0) {
        m = m | 0x100;
    }
    if (rec->f14 != 0) {
        m = m | 0x200;
    }
    if (self->kind->kind == 1) {
        m = m | 0x800;
    }
    if ((self->flags >> 3) & 1) {
        m = m | 0x400;
    }
    u = m | 0x1018;
    if (body->ref.idx != 0xFFFF) {
        *(unsigned short *)(D_001CF6F8[sl->group].slots + (body->ref.idx << 4) + 8) = u;
    }
    if (other != 0) {
        if (other->f_F4 != 0) {
            func_037E40(other, 0x29);
            other->fDD4 = 0;
            func_037618(other);
            func_079DA0(2);
            if (func_018558(6) != 0) {
                func_0AABE8(func_0AA360());
            }
            body->saved = self->mode;
        }
    }
    body->state = 0;
}
