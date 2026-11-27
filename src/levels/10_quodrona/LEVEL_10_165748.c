/* LEVEL_10:0x165748 -- event handler of a timed actor: reacts to start/stop events, runs the blocker, counts its timer down and reports the new status. */
typedef struct {
    char pad00[0x30];
    int w_30;
} Info;

typedef struct {
    char pad00[0x88];
    char blk88[0x88];
    float f_110;
    unsigned char b_114;
} Blk;

typedef struct {
    char pad00[0x45];
    unsigned char state_45;
    char pad46[0x54 - 0x46];
    Info *info_54;
    Blk *blk_58;
} Obj;

typedef struct {
    char pad00[8];
    unsigned char b_08;
    char pad09[3];
    unsigned char b_0C;
} Tally;

extern char *D_001FCFAC;
extern int D_00223780;
extern Tally D_0023A330;

extern void func_1E0240(Obj *o, int a, int b, float f);
extern void func_07CCA0(Obj *o, int a);
extern void func_016830(Obj *o, int a, int b, int c);
extern void func_014810(char *p, Obj *o, int a, int b, int c);
extern void func_165CA0(Obj *o, int a);

int func_165748(Obj *o, int ev, int x, int b, int c, int d, float f)
{
    Info *info;
    Blk *blk;

    if (o->state_45 == 0) {
        return 0;
    }
    if (ev == 10) {
        func_1E0240(o, *(int *)(D_001FCFAC + 0x13734), 0x15, 0.2f);
        func_07CCA0(o, 1);
        return 3;
    }
    info = o->info_54;
    blk = o->blk_58;
    if (o->state_45 == 0xB || o->state_45 == 0xC) {
        if (ev != 7) {
            return 1;
        }
    }
    if (ev == 6 && 0.0f < blk->f_110) {
        func_016830(o, 1, info->w_30, blk->b_114);
    } else if (ev == 7) {
        func_016830(o, 0, info->w_30, blk->b_114);
    }
    blk->f_110 = blk->f_110 - f;
    func_014810(blk->blk88, o, b, c, d);
    if (blk->f_110 <= 0.0f) {
        func_016830(o, 0, info->w_30, blk->b_114);
        if (ev == 0xB) {
            func_1E0240(o, *(int *)(D_001FCFAC + 0x13734), 0x15, 0.2f);
            func_07CCA0(o, 1);
        } else {
            func_165CA0(o, 0xB);
        }
        if (D_00223780 == 10) {
            if ((unsigned char)(D_0023A330.b_0C - 1) < 0x3F) {
                D_0023A330.b_08 = D_0023A330.b_08 + 1;
            }
        }
        return 3;
    }
    if (o->state_45 != 10) {
        if (x != 0) {
            func_165CA0(o, 10);
        }
    }
    return 2;
}
