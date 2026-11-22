/* LEVEL_19:0x0BDA40 -- placement copy of LEVEL_01_0CEA68.c: menu input handler: on cancel or confirm plays the cue and changes the global state, on select plays the cue for the highlighted entry, arms the swirl effect for entry kinds 5/0/2, starts the entry's action; otherwise passes the pad bits on, then refreshes the entry's item. */
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
extern char D_0027AAE8[];
extern struct Ent D_001B1E48[];
extern unsigned char D_001A2B59;
extern unsigned int func_079AA0(int value);
extern int func_0A8D30(char *p);
extern int func_0A4928(int index);
extern int func_0AB880(void);
extern void func_018898(int state, int arg);
extern void func_0B34E8(void);
extern void func_023F48(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3);
extern void func_0BDFA8(void);
extern int func_0A7FD0(char *o, int arg);
extern int func_111480(int idx, int val);

void func_0BDA40(void)
{
    struct Ent *ent;
    struct Rec *rec;
    unsigned int pad;

    ent = 0;
    pad = func_079AA0(0x6B10);
    rec = (struct Rec *)func_0A8D30(D_0027AAE8);
    if (rec != 0) {
        ent = &D_001B1E48[rec->idx];
    }
    if (pad & 0x8) {
        func_0A4928(0);
        func_018898(4, 0);
    } else if (pad & 0x1000) {
        func_0A4928(0);
        if (func_0AB880() == 0) {
            func_018898(4, 0);
        }
    } else if (pad & 0x4000) {
        if (ent != 0) {
            func_0A4928(1);
            if (ent->w4 == 5) {
                if (ent->w8 == 0 || ent->w8 == 2) {
                    g_RENDEREFFECT_SWIRLY_Active = 1;
                }
            }
            if (D_001A2B59 != 0) {
                func_0B34E8();
            }
            func_023F48(ent->w4, ent->w8, 0, (int)func_0BDFA8, 0, 0, -1, 0);
        } else {
            func_0A4928(0xC);
        }
    } else {
        func_0A7FD0(D_0027AAE8, pad);
    }
    if (rec != 0 && ent != 0 && ent->wC != 0) {
        func_111480(0, ent->wC);
    }
}
