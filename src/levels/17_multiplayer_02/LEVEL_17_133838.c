/* LEVEL_17:0x133838 -- placement copy of LEVEL_16_133DE8.c: when the owner's key matches, adjusts a counter and effect values, starts an effect, and resets a state byte. */

struct Src133DE8 {
    char pad0[0xF8];
    int wF8;
    char padFC[0x174];
    float f270;
};

struct Fx133DE8 {
    struct Src133DE8 *p0;
    float f04;
    int w08;
    float f0C;
};

struct Cnt133DE8 {
    char pad0[0x40];
    int w40;
};

struct Key133DE8 {
    char pad0[0x24];
    int w24;
};

struct Obj133DE8 {
    char pad0[0x40];
    struct Key133DE8 *p40;
    char pad44;
    unsigned char b45;
    char pad46[0x12];
    struct Fx133DE8 *p58;
};

struct Flags133DE8 {
    char pad0[0xD];
    unsigned char b0D;
};

extern const int D_001C3920;
extern struct Flags133DE8 D_001D0F30;

extern struct Cnt133DE8 *func_021A48(int a, int b);
extern void func_0703D8(struct Obj133DE8 *o, int a, int b, int c, float f, float g);

void func_133838(struct Obj133DE8 *o)
{
    struct Fx133DE8 *fx;
    struct Src133DE8 *src;
    struct Cnt133DE8 *c;

    if (o->p40->w24 == 0xEF38865E) {
        fx = o->p58;
        src = fx->p0;
        c = func_021A48(3, src->wF8);
        c->w40 = c->w40 - 1;
        fx->f04 = 1.2000240087509155f;
        fx->f0C = 6.000119209289551f;
        if (src->f270 > 0.009999999776482582f) {
            fx->f0C = 0.5000099539756775f;
        }
        fx->w08 = 3;
        func_0703D8(o, 3, 0, 1, 0.10000000149011612f, 0.0f);
        o->b45 = 8;
        if (D_001C3920 == 7 && (unsigned int)(D_001D0F30.b0D - 1) < 0x3F) {
            D_001D0F30.b0D = 0x80;
        } else if (D_001C3920 == 9 && (unsigned int)(D_001D0F30.b0D - 1) < 0x3F) {
            D_001D0F30.b0D = 0x80;
        }
    }
}
