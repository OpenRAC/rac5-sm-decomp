/* USA LEVEL_15.REL:0x1214F0, 88-byte candidate (14 November 2026).
 * Measured pinned: 15 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Cfg_1214F0 {
    char pad_00[0x2C];
    float scale;
};

struct Src_1214F0 {
    float a_00;
    char pad_04[8];
    float s_0C;
    char pad_10[4];
    float c_14;
    char pad_18[0x10];
    float e_28;
};

struct Obj_1214F0 {
    char pad_00[0x1C];
    struct Cfg_1214F0 *cfg;
    char pad_20[0x18];
    struct Src_1214F0 *src;
    float inv_3C;
    float v_40;
    float v_44;
    char pad_48[4];
    float v_4C;
};

void func_1214F0(struct Obj_1214F0 *o, struct Src_1214F0 *s)
{
    o->v_40 = s->s_0C * o->cfg->scale;
    o->src = s;
    o->v_4C = s->c_14 * s->s_0C;
    o->v_44 = -s->e_28 * s->s_0C;
    o->inv_3C = 1.0f / s->a_00;
}
