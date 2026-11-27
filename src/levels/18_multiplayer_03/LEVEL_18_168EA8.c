/* LEVEL_18:0x168EA8 -- placement copy of LEVEL_17_15C838.c: puts an object into its idle state: refreshes its slot flags in the group table and, when a second object is given, resets that one's counters. */
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

extern Cfg *D_001BF584;
extern Group D_001DE778[];
extern char D_002E5688[];
extern char D_001C54E0[];

extern void func_061B18(Obj *o, char *a, char *b);
extern void func_16A510(Obj *o, int a);
extern void func_072BC8(Obj *o, Cfg *cfg, float a, float b, float c, float d, int i0, int i1, int i2, int i3, int i4, int i5);
extern void func_036E20(Other *o, int id);
extern void func_036608(Other *o);
extern void func_078CA8(unsigned int value);
extern int func_018220(int value);
extern unsigned int func_0A9DF8(void);
extern void func_0AA680(unsigned int value);

void func_168EA8(Obj *self, Other *other)
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
    func_061B18(self, D_002E5688, D_001C54E0);
    func_16A510(self, 0);
    cfg = D_001BF584;
    if (cfg != 0) {
        func_072BC8(self, cfg, cfg->a, cfg->b, cfg->c, cfg->d, 0, 0, 0, 0, 0, 1);
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
        *(unsigned short *)(D_001DE778[sl->group].slots + (body->ref.idx << 4) + 8) = u;
    }
    if (other != 0) {
        if (other->f_F4 != 0) {
            func_036E20(other, 0x29);
            other->fDD4 = 0;
            func_036608(other);
            func_078CA8(2);
            if (func_018220(6) != 0) {
                func_0AA680(func_0A9DF8());
            }
            body->saved = self->mode;
        }
    }
    body->state = 0;
}
