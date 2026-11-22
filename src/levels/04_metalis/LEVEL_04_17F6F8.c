/* LEVEL_04:0x17F6F8 -- placement copy of LEVEL_01_172200.c: state init: builds the object's effect set from three parallel config tables and optionally starts one more effect. */
typedef struct {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Fx;

typedef struct {
    char pad_00[0x2C];
    unsigned int count_2C;
    char pad_30[8];
} Cfg;

typedef struct {
    char pad_00[0x54];
    void *slots_54[1];
    char pad_58[0x50];
    char fx_A8[1];
} Rec;

typedef struct {
    char pad_00[0x0C];
    unsigned char on_0C;
} Owner;

typedef struct {
    char pad_00[0x45];
    unsigned char idx_45;
    unsigned char ready_46;
    char pad_47[0x0D];
    Owner *owner_54;
    Rec *rec_58;
} Obj;

extern Cfg D_0023AC90[];
extern char D_0023AD38[];
extern char D_0023ADC0[];
extern Fx *D_002210BC;

extern int func_0EE368(void *out, void *cfg, void *src, int a3, int flag_a, int flag_b);
extern unsigned int func_0EE4A0(void *out, void *e, float *origin);
extern int func_0EF0E0(void *out, void *def, void *src, int kind, int flag);
extern void func_083E30(Obj *o, Fx *fx, void *slot, int i0, int i1, int i2, int i3, int i4,
                        float f0, float f1, float f2, float f3);

void func_17F6F8(Obj *o)
{
    Rec *rec;
    Owner *owner;
    void **slot;
    Fx *fx;
    char *p;

    rec = o->rec_58;
    owner = o->owner_54;
    slot = &rec->slots_54[0];
    func_0EE368(slot, &D_0023AC90[o->idx_45], o, 0, 0, 1);
    slot += D_0023AC90[o->idx_45].count_2C;
    func_0EE4A0(rec, D_0023AD38 + o->idx_45 * 0x2C, (float *)((char *)o + 0x30));
    func_0EF0E0(slot, D_0023ADC0 + o->idx_45 * 0x38, o, 0, 0);
    o->ready_46 = 1;
    if (owner->on_0C != 0) {
        p = &rec->fx_A8;
        fx = D_002210BC;
        if (fx != 0)
            func_083E30(o, fx, p, 0, 0, 0, 0, 1, fx->f_14, fx->f_18, fx->f_1C, fx->f_20);
    }
}
