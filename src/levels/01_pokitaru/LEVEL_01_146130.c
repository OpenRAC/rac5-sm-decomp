/* LEVEL_01:0x146130 -- clears and sets up the control record, installs its handler and mirrors two settings into the flags. */
typedef struct Rec {
    char pad0[0x1C];
    char blk[0x2C];
} Rec;

typedef struct Cfg {
    char pad[0xF8];
    int f8;
} Cfg;

typedef struct Hdl {
    char pad[0xDC];
    void *handler;
} Hdl;

typedef struct Obj {
    char pad0[0x48];
    Hdl *hdl;
    char pad1[0x58 - 0x4C];
    Rec *rec;
    char pad2[0x64 - 0x5C];
    unsigned int flags64;
    char pad3[0x74 - 0x68];
    unsigned short opts;
} Obj;

extern void *memset(void *p, int c, unsigned int n);
extern Cfg *D_001F45E4;
extern char D_0020F588[];
extern char D_0021C760[];
extern char D_0021C770[];
extern char D_001464D8[];

extern void func_0781D8(void *p, int a, int b, int c, void *d);
extern int func_024C98(int a, int b, int c);
extern void func_06ADB8(float a, float b, float c, Cfg *cfg, void *p, void *q, int z);
extern void func_023838(void *p, int a, int b, long long c);

int func_146130(Obj *o)
{
    Cfg *cfg;
    Rec *rec;

    rec = o->rec;
    memset(rec, 0, 0x48);
    func_0781D8(rec->blk, 1, 0x44, 0x45, D_0020F588);
    cfg = D_001F45E4;
    *((unsigned char *)o + 0x46) = 0;
    o->hdl->handler = D_001464D8;
    if (func_024C98(6, 0xD, cfg->f8)) {
        o->opts = o->opts & 0xFFFD;
    } else {
        o->opts = o->opts | 2;
    }
    if (func_024C98(6, 0xE, cfg->f8)) {
        o->opts = o->opts & 0xFFFB;
    } else {
        o->opts = o->opts | 4;
    }
    func_06ADB8(1.2f, 0.3f, 10.0f, D_001F45E4, D_0021C760, D_0021C770, 0);
    func_023838(&o->opts, 6, cfg->f8, -1);
    o->flags64 = o->flags64 | 0x40000;
    return 1;
}
