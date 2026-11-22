/* USA LEVEL_17.REL:0x16E4C8, 508-byte candidate (22 November 2026).
 * Measured gnu-ee-trial: 9 differing words; first difference at 0x7C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[0x30];
    int w_30;
} Info;

typedef struct {
    char pad00[0xC];
    float f_0C;
    char pad10[0xC];
    unsigned short h_1C;
    char pad1E;
    unsigned char b_1F;
    char pad20[0x20];
    float f_40;
    char pad44[0x10];
    unsigned char b_54;
} Blk;

typedef struct {
    char pad00[0x45];
    unsigned char state_45;
    char pad46[0x54 - 0x46];
    Info *info_54;
    Blk *blk_58;
} Obj;

typedef struct {
    char pad00[0x68];
} Slot;

extern Slot D_001CF6F8[];
extern float D_001C9F98[];
extern float D_001C9FA8[];

extern void func_015100(Obj *o, int a, int b, int c);
extern void func_086E80(Slot *s);
extern void func_1441B8(int a, int b);
extern void func_112E98(int a, int b);
extern void func_179F10(Blk *b, Obj *o, int a, int c, int d, float f, float g);
extern void func_16E838(Obj *o, int a, int b);
extern void func_013F10(Blk *b, Obj *o, int a, int c, int d);

int func_16E4C8(Obj *o, int ev, int x, int b, int c, int d, float f)
{
    Info *info;
    Blk *blk;
    Slot *sl;

    info = o->info_54;
    blk = o->blk_58;
    if (ev == 10) {
        goto release;
    }
    if (ev == 6) {
        if (0.0f < blk->f_40) {
            func_015100(o, 1, info->w_30, blk->b_54);
        }
    } else if (ev == 7) {
        func_015100(o, 0, info->w_30, blk->b_54);
    }
    blk->f_40 = blk->f_40 - f;
    if (blk->f_40 <= 0.0f) {
        func_015100(o, 0, info->w_30, blk->b_54);
        if (ev == 11) {
        release:
            sl = &D_001CF6F8[blk->b_1F];
            if (blk->h_1C != 0xFFFF) {
                func_086E80(sl);
            }
            blk->h_1C = 0xFFFF;
            func_1441B8(info->w_30, blk->b_54);
        } else {
            func_179F10(blk, o, b, c, d, D_001C9F98[x], D_001C9FA8[x]);
            func_16E838(o, o->state_45, 0x13);
        }
        func_112E98(d, 1);
        return 3;
    }
    if (x != 0) {
        func_013F10(blk, o, b, c, d);
        blk->f_0C = 0.0f;
        func_16E838(o, o->state_45, 0x11);
    }
    return 2;
}
