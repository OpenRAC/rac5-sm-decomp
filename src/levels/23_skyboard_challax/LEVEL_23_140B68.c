/* LEVEL_23:0x140B68 -- placement copy of LEVEL_22_117810.c: starts or releases an effect depending on whether a projected point lies inside the unit box. */

struct Sub117810 {
    char pad_00[0x108];
    char *w_108;
    unsigned char b_10C;
};
struct Obj117810 {
    char pad_00[0x58];
    struct Sub117810 *sub_58;
};
struct G117810 {
    char pad_00[0x30];
    float m_30[1];
    char pad_34[0xD4];
    unsigned short h_108;
};
struct Fx117810 {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
};

extern struct G117810 D_002025C0;
extern struct Fx117810 *D_00363914;

void func_116C90(float *out, struct Sub117810 *s, float *m);
void func_05B968(void);
void func_05B978(void);
void func_077DD0(struct Obj117810 *o, struct Fx117810 *fx, char **slot, int a, int b, int c, int d, int e, float f0, float f1, float f2, float f3);
void func_077F38(char *h);

void func_140B68(struct Obj117810 *o)
{
    float v[3];
    struct Sub117810 *s;
    struct Fx117810 *g;
    struct G117810 *gl;
    char **slot;

    gl = &D_002025C0;
    s = o->sub_58;
    func_116C90(v, s, gl->m_30);
    if (v[0] >= -1.0f && v[0] <= 1.0f
        && v[1] >= -1.0f && v[1] <= 1.0f
        && v[2] >= -1.0f && v[2] <= 1.0f
        && gl->h_108 == 2) {
        if (s->b_10C != 0) {
            func_05B968();
        } else {
            func_05B978();
        }
        if (s->w_108 == 0) {
            g = D_00363914;
            slot = &s->w_108;
            if (g != 0) {
                func_077DD0(o, g, slot, 0, 0, 0, 0, 1, g->f_14, g->f_18, g->f_1C, g->f_20);
            }
        }
    } else {
        if (s->w_108 != 0) {
            func_077F38(s->w_108);
            s->w_108 = 0;
        }
    }
}
