/* LEVEL_24:0x0C83B0 -- placement copy of LEVEL_01_0CEA68.c: menu input handler: on cancel or confirm plays the cue and changes the global state, on select plays the cue for the highlighted entry, arms the swirl effect for entry kinds 5/0/2, starts the entry's action; otherwise passes the pad bits on, then refreshes the entry's item. */
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
extern char D_002F87A8[];
extern struct Ent D_001D3A98[];
extern unsigned char D_001C4B51;
extern unsigned int func_0812C0(int value);
extern int func_0B3C98(char *p);
extern int func_0AF8B0(int index);
extern int func_0B63E8(void);
extern void func_018E18(int state, int arg);
extern void func_0BE020(void);
extern void func_0244A0(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3);
extern void func_0C8918(void);
extern int func_0B2F38(char *o, int arg);
extern int func_129B70(int idx, int val);

void func_0C83B0(void)
{
    struct Ent *ent;
    struct Rec *rec;
    unsigned int pad;

    ent = 0;
    pad = func_0812C0(0x6B10);
    rec = (struct Rec *)func_0B3C98(D_002F87A8);
    if (rec != 0) {
        ent = &D_001D3A98[rec->idx];
    }
    if (pad & 0x8) {
        func_0AF8B0(0);
        func_018E18(4, 0);
    } else if (pad & 0x1000) {
        func_0AF8B0(0);
        if (func_0B63E8() == 0) {
            func_018E18(4, 0);
        }
    } else if (pad & 0x4000) {
        if (ent != 0) {
            func_0AF8B0(1);
            if (ent->w4 == 5) {
                if (ent->w8 == 0 || ent->w8 == 2) {
                    g_RENDEREFFECT_SWIRLY_Active = 1;
                }
            }
            if (D_001C4B51 != 0) {
                func_0BE020();
            }
            func_0244A0(ent->w4, ent->w8, 0, (int)func_0C8918, 0, 0, -1, 0);
        } else {
            func_0AF8B0(0xC);
        }
    } else {
        func_0B2F38(D_002F87A8, pad);
    }
    if (rec != 0 && ent != 0 && ent->wC != 0) {
        func_129B70(0, ent->wC);
    }
}
