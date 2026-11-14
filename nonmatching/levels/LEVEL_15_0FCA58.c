/* USA LEVEL_15.REL:0x0FCA58, 104-byte candidate (14 November 2026).
 * Measured pinned: 21 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Cfg_0FCA58 {
    char pad_00[0x2C];
    float scale;
};

struct Src_0FCA58 {
    float a_00;
    char pad_04[8];
    float s_0C;
    char pad_10[4];
    float c_14;
    char pad_18[0xC];
    float d_24;
    float e_28;
};

struct Obj_0FCA58 {
    char pad_00[0x1C];
    struct Cfg_0FCA58 *cfg;
    char pad_20[0x18];
    struct Src_0FCA58 *src;
    float inv_3C;
    float v_40;
    float v_44;
    char pad_48[4];
    float v_4C;
    float inv_50;
};

void func_0FCA58(struct Obj_0FCA58 *o, struct Src_0FCA58 *s)
{
    o->v_44 = -s->e_28 * s->s_0C;
    o->src = s;
    o->inv_3C = 1.0f / s->a_00;
    o->v_4C = s->c_14 * s->s_0C;
    o->v_40 = s->s_0C * o->cfg->scale;
    o->inv_50 = 1.0f / s->d_24;
}
