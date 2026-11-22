/* LEVEL_18:0x0BD140 -- placement copy of LEVEL_01_0CEA68.c: menu input handler: on cancel or confirm plays the cue and changes the global state, on select plays the cue for the highlighted entry, arms the swirl effect for entry kinds 5/0/2, starts the entry's action; otherwise passes the pad bits on, then refreshes the entry's item. */
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
extern char D_0027ACE8[];
extern struct Ent D_001B2148[];
extern unsigned char D_001A2E59;
extern unsigned int func_078F38(int value);
extern int func_0A8430(char *p);
extern int func_0A40A8(int index);
extern int func_0AAF80(void);
extern void func_0181E0(int state, int arg);
extern void func_0B2BE8(void);
extern void func_023950(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3);
extern void func_0BD6A8(void);
extern int func_0A76D0(char *o, int arg);
extern int func_10FA90(int idx, int val);

void func_0BD140(void)
{
    struct Ent *ent;
    struct Rec *rec;
    unsigned int pad;

    ent = 0;
    pad = func_078F38(0x6B10);
    rec = (struct Rec *)func_0A8430(D_0027ACE8);
    if (rec != 0) {
        ent = &D_001B2148[rec->idx];
    }
    if (pad & 0x8) {
        func_0A40A8(0);
        func_0181E0(4, 0);
    } else if (pad & 0x1000) {
        func_0A40A8(0);
        if (func_0AAF80() == 0) {
            func_0181E0(4, 0);
        }
    } else if (pad & 0x4000) {
        if (ent != 0) {
            func_0A40A8(1);
            if (ent->w4 == 5) {
                if (ent->w8 == 0 || ent->w8 == 2) {
                    g_RENDEREFFECT_SWIRLY_Active = 1;
                }
            }
            if (D_001A2E59 != 0) {
                func_0B2BE8();
            }
            func_023950(ent->w4, ent->w8, 0, (int)func_0BD6A8, 0, 0, -1, 0);
        } else {
            func_0A40A8(0xC);
        }
    } else {
        func_0A76D0(D_0027ACE8, pad);
    }
    if (rec != 0 && ent != 0 && ent->wC != 0) {
        func_10FA90(0, ent->wC);
    }
}
