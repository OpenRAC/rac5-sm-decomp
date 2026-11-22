/* LEVEL_01:0x1C1130 -- initialises a spawned device: clears its record, binds its sub-node, installs handlers, validates the start state and relocates the optional pointer, then finishes setup through the right helper. */
extern void *memset(void *p, int c, unsigned int n);

typedef struct Obj Obj;

typedef struct {
    char pad_00[0x40];
    int w_40;
} Ptr;

typedef struct {
    char pad_00[0x58];
    char pad_58[8];
} Dev;

typedef struct {
    char pad_00[0xDC];
    void (*upd_DC)(void);
    void (*upd_E0)(void);
} Hdl;

typedef struct {
    char pad_00[0x60];
    unsigned char lvl_60;
} Inner;

typedef struct {
    char pad_00[0x10];
    int w_10;
    char pad_14[0x2C - 0x14];
    int w_2C;
    char pad_30[4];
    Ptr *p_34;
    int w_38;
} Info;

typedef struct {
    char pad_00[0x6C];
    int w_6C;
} Ext;

typedef struct {
    char pad_00[0x58];
    Inner *in_58;
} PtrT;

typedef struct {
    char pad_00[0x28];
    float f_28;
    char pad_2C[0x34 - 0x2C];
} Rec;

typedef struct {
    char pad_00[4];
    Rec *recs_04;
} Cfg;

typedef struct {
    char pad_00[0x40];
    Cfg *cfg_40;
    unsigned char idx_44;
    unsigned char state_45;
    char pad_46[0x48 - 0x46];
    Hdl *hdl_48;
    char pad_4C[0x54 - 0x4C];
    Info *info_54;
    Ext *ext_58;
    char pad_5C[0x64 - 0x5C];
    unsigned int flags_64;
    char pad_68[0x78 - 0x68];
    unsigned int flags_78;
} ObjX;

extern int D_00206D94;
extern void func_0133E8(char *p, ObjX *o, int a, int b);
extern int func_02F930(Info *i, ObjX *o);
extern void func_1C36D0(void);
extern void func_1C36F8(void);
extern int func_014058(float f, float *p, int a, int b);
extern void func_16F930(Ptr *p, ObjX *o, int value);
extern void func_1C1C40(ObjX *o);
extern void func_1C1E90(ObjX *o, int a, int b);

static __inline__ int Relocate(Ptr **pp)
{
    Ptr *n;

    if (*pp == 0) {
        return 0;
    }
    n = (Ptr *)(D_00206D94 + (int)*pp);
    if (n->w_40 == 0) {
        *pp = 0;
        return 0;
    }
    *pp = n;
    return 1;
}

int func_1C1130(ObjX *o)
{
    Ext *e;
    Info *in;
    int ok;
    Ptr **pp;
    void (*fn)(ObjX *);

    e = o->ext_58;
    in = o->info_54;
    memset(e, 0, 0x90);
    func_0133E8((char *)e + 0x10, o, 1, 0x10);
    if (in->w_2C == 0) {
        return 0;
    }
    if (func_02F930(in, o) != 1) {
        return 0;
    }
    e->w_6C = in->w_10;
    o->hdl_48->upd_E0 = func_1C36D0;
    o->hdl_48->upd_DC = func_1C36F8;
    if (func_014058(1.0f, (float *)((char *)o + 0x30), 0, 1) == 0) {
        return 0;
    }
    if (o->state_45 != 0) {
        if (o->state_45 != 5) {
            return 0;
        }
        if (in->w_38 == 0) {
            return 0;
        }
    }
    fn = func_1C1C40;
    pp = &in->p_34;
    o->flags_64 = o->flags_64 | 0x1000;
    ok = Relocate(pp);
    if (ok) {
        if (((PtrT *)*pp)->in_58->lvl_60 < 0xC) {
            func_16F930(*pp, o, (int)fn);
        }
    } else {
        if (fn != 0) {
            fn(o);
        }
    }
    func_1C1E90(o, 0xFF, o->state_45);
    o->cfg_40->recs_04[o->idx_44].f_28 = 1.0f;
    o->flags_78 = (o->flags_78 & 0xFFF0FFFFu) | 0x20000;
    return 1;
}
