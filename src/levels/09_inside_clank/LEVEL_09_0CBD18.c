/* LEVEL_09:0x0CBD18 -- placement copy of LEVEL_01_0CEA68.c: menu input handler: on cancel or confirm plays the cue and changes the global state, on select plays the cue for the highlighted entry, arms the swirl effect for entry kinds 5/0/2, starts the entry's action; otherwise passes the pad bits on, then refreshes the entry's item. */
struct Rec {
    char pad0[0xD4];
    int idx;
};

struct Ent {
    int w0;
    int w4;
    int w8;
    int wC;
};

extern unsigned char g_RENDEREFFECT_SWIRLY_Active;
extern char D_00314068[];
extern struct Ent D_001ECC18[];
extern unsigned char D_001DDCD1;
extern unsigned int func_0849D8(int value);
extern int func_0B76B8(char *p);
extern int func_0B32D0(int index);
extern int func_0B9DD0(void);
extern void func_019C18(int state, int arg);
extern void func_0C1A08(void);
extern void func_025AE0(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3);
extern void func_0CC280(void);
extern int func_0B6958(char *o, int arg);
extern int func_12D008(int idx, int val);

void func_0CBD18(void)
{
    struct Ent *ent;
    struct Rec *rec;
    unsigned int pad;

    ent = 0;
    pad = func_0849D8(0x6B10);
    rec = (struct Rec *)func_0B76B8(D_00314068);
    if (rec != 0) {
        ent = &D_001ECC18[rec->idx];
    }
    if (pad & 0x8) {
        func_0B32D0(0);
        func_019C18(4, 0);
    } else if (pad & 0x1000) {
        func_0B32D0(0);
        if (func_0B9DD0() == 0) {
            func_019C18(4, 0);
        }
    } else if (pad & 0x4000) {
        if (ent != 0) {
            func_0B32D0(1);
            if (ent->w4 == 5) {
                if (ent->w8 == 0 || ent->w8 == 2) {
                    g_RENDEREFFECT_SWIRLY_Active = 1;
                }
            }
            if (D_001DDCD1 != 0) {
                func_0C1A08();
            }
            func_025AE0(ent->w4, ent->w8, 0, (int)func_0CC280, 0, 0, -1, 0);
        } else {
            func_0B32D0(0xC);
        }
    } else {
        func_0B6958(D_00314068, pad);
    }
    if (rec != 0 && ent != 0 && ent->wC != 0) {
        func_12D008(0, ent->wC);
    }
}
