/* LEVEL_03:0x1B87B8 -- placement copy of LEVEL_01_1A56B0.c: toggles an effect between its two states from the player's position, and while it is on applies up to five channel values (each at full strength or scaled by the fade) through the channel setters. */
typedef struct Link {
    char pad_00[0x54];
    struct Eff *eff_54;
} Link;

typedef struct Eff {
    int target_00;
    unsigned char hold_04;
    char pad_05[3];
    float v_08;
    float v_0C;
    float v_10;
    float v_14;
    float v_18;
    Link *link_1C;
    unsigned char on_20;
    unsigned char on_21;
    unsigned char on_22;
    unsigned char on_23;
    unsigned char on_24;
    unsigned char flag_25;
    unsigned char arm_26;
    unsigned char done_27;
    float fade_28;
    int chan_2C;
} Eff;

typedef struct {
    char pad_00[0x45];
    unsigned char state_45;
    char pad_46[0xE];
    Eff *eff_54;
} Obj;

extern void func_01A0B0(float *v);
extern int func_084588(void *a, float *p);
extern void func_0038C0(float f12, int a0, int a1, float f13);
extern void func_003720(float f12, int a0, int a1, float f13);
extern void func_003750(float f12, int a0, int a1, float f13);
extern void func_003C28(void);
extern void func_003780(int a, float x, float y, int b);
extern void func_0033D0(int a);
extern void func_003870(float f12, int a0, int a1, float f13);

#define CHAN(e, fn, val) \
    if ((e)->hold_04 != 0 || (e)->fade_28 <= 0.0f) { \
        fn((val), (e)->chan_2C, 2, 1.0f); \
    } else { \
        fn((val), (e)->chan_2C, 0, (e)->fade_28); \
    }

void func_1B87B8(Obj *o)
{
    Eff *e;
    float v[3];

    e = o->eff_54;
    if (e->flag_25 != 0) {
        if (o->state_45 == 1) {
            func_01A0B0(v);
            if (func_084588((void *)e->target_00, v) == 0) {
                o->state_45 = 0;
                if (e->link_1C != 0) {
                    e->link_1C->eff_54->flag_25 = 1;
                }
            }
            if (e->on_21 != 0) {
                CHAN(e, func_0038C0, e->v_08)
            }
            if (e->on_22 != 0) {
                CHAN(e, func_003720, e->v_0C)
            }
            if (e->on_23 != 0) {
                CHAN(e, func_003750, e->v_10)
            }
            if (e->on_20 != 0) {
                func_003C28();
                func_003780(e->chan_2C, e->v_18, e->fade_28 * 0.25f, 0);
                func_0033D0(0);
            }
            if (e->on_24 != 0) {
                CHAN(e, func_003870, e->v_14)
            }
        } else if (e->arm_26 == 0 || e->done_27 == 0) {
            func_01A0B0(v);
            if (func_084588((void *)e->target_00, v) != 0) {
                if (e->link_1C != 0) {
                    e->link_1C->eff_54->flag_25 = 0;
                }
                o->state_45 = 1;
                e->done_27 = 1;
            }
        }
    }
}
