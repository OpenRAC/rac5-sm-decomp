/* LEVEL_06:0x19B0E8 -- steps a four-state fade timer, calling the colour blend while fading in and out and toggling a flag bit. */

typedef struct {
    char pad_00[0x30];
    float t_30;
    char pad_34[9];
    unsigned char cnt_3D;
} Prog;

typedef struct {
    char pad_00[0x46];
    unsigned char state_46;
    char pad_47[0xD];
    Prog *p_54;
    char pad_58[0xC];
    int flags_64;
    unsigned int color_68;
} Obj;

extern unsigned int func_117620(unsigned int c0, unsigned int c1, float t);

void func_19B0E8(Obj *o, float a, float rate, float b)
{
    Prog *p;

    p = o->p_54;
    if (o->state_46 == 0) {
        float t;

        t = p->t_30 + 0.033333335f;
        p->t_30 = t;
        if (a < t) {
            p->cnt_3D++;
            o->state_46 = 1;
            p->t_30 = 0.0f;
            o->color_68 = 0xFFFFFFFF;
            o->flags_64 |= 0x40;
        }
    } else if (o->state_46 == 1) {
        float t;

        t = p->t_30 + rate;
        p->t_30 = t;
        if (t <= 1.0f) {
            o->color_68 = func_117620(0xFFFFFFFF, 0x22000055, t);
        } else {
            o->state_46 = 2;
            o->color_68 = 0x22000055;
            p->t_30 = 0.0f;
        }
    } else if (o->state_46 == 3) {
        float t;

        t = p->t_30 + rate;
        p->t_30 = t;
        if (t <= 1.0f) {
            o->color_68 = func_117620(0x22000055, 0xFFFFFFFF, t);
        } else {
            o->state_46 = 0;
            p->t_30 = 0.0f;
            o->flags_64 &= ~0x40;
        }
    } else if (o->state_46 == 2) {
        float t;

        t = p->t_30 + 0.033333335f;
        p->t_30 = t;
        if (b < t) {
            o->state_46 = 3;
            p->t_30 = 0.0f;
            o->color_68 = 0x22000055;
            o->flags_64 |= 0x40;
        }
    }
}
