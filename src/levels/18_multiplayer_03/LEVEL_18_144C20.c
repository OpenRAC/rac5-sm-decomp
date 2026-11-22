/* LEVEL_18:0x144C20 -- event handler of a timed actor: releases its sound handle on kill/end events, counts its timer down on the run events and reports the new status. */
typedef struct {
    char pad00[0x2C];
    int w_2C;
} Info;

typedef struct {
    unsigned short h_00;
    char pad02;
    unsigned char b_03;
    char pad04[0x28];
    float f_2C;
    char pad30[0x10];
    float f_40;
    unsigned char b_44;
} Blk;

typedef struct {
    char pad00[0x45];
    unsigned char state_45;
    char pad46[0x54 - 0x46];
    Info *info_54;
    Blk *blk_58;
    char pad5C[8];
    unsigned int flags_64;
} Obj;

typedef struct {
    char pad00[8];
    unsigned char b_08;
    char pad09[3];
    unsigned char b_0C;
} Tally;

typedef struct {
    char pad00[0x68];
} Slot;

extern Slot D_001DE778[];
extern int D_001D1A20;
extern Tally D_001DFFB0;

extern void func_085D88(Slot *s, unsigned int index);
extern void func_149858(int a, int b);
extern void func_1124C0(int a, int b);
extern void func_014DF0(Obj *o, int a, int b, int c);
extern void func_144E60(Obj *o, int a);

int func_144C20(Obj *o, int ev, int x, int b, int c, int d, float f)
{
    Info *info;
    Blk *blk;
    Slot *sl;
    int oa;

    blk = o->blk_58;
    info = o->info_54;
    if (ev == 10) {
        oa = blk->b_03 * 0x68;
        oa += (int)D_001DE778;
        sl = (Slot *)oa;
        if (blk->h_00 != 0xFFFF) {
            func_085D88(sl, blk->h_00);
            blk->h_00 = 0xFFFF;
        }
        func_149858(info->w_2C, blk->b_44);
        func_1124C0(d, 1);
        return 3;
    }
    blk->f_2C = blk->f_2C - f;
    if (ev == 6 && 0.0f < blk->f_2C) {
        func_014DF0(o, 1, info->w_2C, blk->b_44);
    } else if (ev == 7) {
        func_014DF0(o, 0, info->w_2C, blk->b_44);
    }
    if (blk->f_2C <= 0.0f) {
        if (o->state_45 != 12) {
            func_1124C0(d, 1);
        }
        func_014DF0(o, 0, info->w_2C, blk->b_44);
        if (ev == 11) {
            oa = blk->b_03 * 0x68;
            oa += (int)D_001DE778;
            sl = (Slot *)oa;
            if (blk->h_00 != 0xFFFF) {
                func_085D88(sl, blk->h_00);
                blk->h_00 = 0xFFFF;
            }
            func_149858(info->w_2C, blk->b_44);
        } else {
            o->flags_64 |= 8;
            func_144E60(o, 12);
        }
        if (D_001D1A20 == 7) {
            if ((unsigned char)(D_001DFFB0.b_0C - 1) < 0x3F) {
                D_001DFFB0.b_08 = D_001DFFB0.b_08 + 1;
            }
        }
        return 3;
    }
    if (x != 0) {
        if (3.0f <= blk->f_40) {
            func_144E60(o, 11);
            blk->f_40 = 0.0f;
        }
    }
    return 2;
}
