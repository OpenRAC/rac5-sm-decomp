/* LEVEL_04:0x1D7E38 -- plays a positional sound at the object, then looks up the keyed entry in the global table and, when its handler returns a record, fills that record from the source and starts it. */

struct GDE_Sound;
struct VEC3;
struct SND_Positional;

struct Ent1D7E38 {
    char pad_00[0x24];
    unsigned int key_24;
    char pad_28[0x1C];
};
struct List1D7E38 {
    char pad_00[0x34];
    struct Ent1D7E38 *ents_34;
    unsigned int n_38;
};
struct Sub1D7E38 {
    int w_00;
    float f_04;
    float f_08;
    float f_0C;
};
struct Rec1D7E38 {
    char pad_00[0x45];
    unsigned char b_45;
    char pad_46[0x12];
    struct Sub1D7E38 *p_58;
};
struct Src1D7E38 {
    float f_00;
    char pad_04[0x08];
    float f_0C;
    float f_10;
    float f_14;
};
struct Obj1D7E38 {
    char pad_00[0x20];
    float f_20;
    char pad_24[0x04];
    float f_28;
    char pad_2C[0x04];
    float pos_30[3];
};

extern struct GDE_Sound *D_003AFF60;
extern unsigned int D_0020D138;
extern struct List1D7E38 *D_002201B0;

void func_0F6E68(int a, float *p);
void SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi(struct GDE_Sound *s, const struct VEC3 *p, float f, struct SND_Positional **out, unsigned int v);
struct Rec1D7E38 *func_07F9D0(struct Ent1D7E38 *e, unsigned int key, struct Obj1D7E38 *o, int v);
void func_1D7F98(struct Rec1D7E38 *r, int a, float *v, int b, int c);

static __inline__ struct Ent1D7E38 *find_key(struct List1D7E38 *l, unsigned int key)
{
    unsigned int i;

    for (i = 0; i < l->n_38; i++) {
        if (l->ents_34[i].key_24 == key) {
            return &l->ents_34[i];
        }
    }
    return 0;
}

void func_1D7E38(struct Obj1D7E38 *o, int w, struct Src1D7E38 *src)
{
    float v[2];
    struct Ent1D7E38 *e;
    struct Rec1D7E38 *r;
    struct Sub1D7E38 *sub;

    func_0F6E68(0, o->pos_30);
    if (D_003AFF60 != 0) {
        SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi(D_003AFF60, (const struct VEC3 *)o->pos_30, 0.0f, 0, D_0020D138);
    }
    e = find_key(D_002201B0, 0x60C69396);
    if (e == 0) {
        r = 0;
    } else {
        r = func_07F9D0(e, 0x60C69396, o, 0xFF);
    }
    if (r != 0) {
        sub = r->p_58;
        sub->w_00 = w;
        r->b_45 = 1;
        sub->f_08 = src->f_10;
        sub->f_0C = src->f_14;
        sub->f_04 = src->f_0C;
        v[0] = src->f_00 * o->f_20;
        v[1] = src->f_00 * o->f_28;
        func_1D7F98(r, 0, v, 0, 0);
    }
}
