/* LEVEL_05:0x0CD010 -- placement copy of LEVEL_01_0CEA68.c: menu input handler: on cancel or confirm plays the cue and changes the global state, on select plays the cue for the highlighted entry, arms the swirl effect for entry kinds 5/0/2, starts the entry's action; otherwise passes the pad bits on, then refreshes the entry's item. */
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
extern char D_003187A8[];
extern struct Ent D_001F2198[];
extern unsigned char D_001E3251;
extern unsigned int func_085978(int value);
extern int func_0B89B0(char *p);
extern int func_0B45C8(int index);
extern int func_0BB0C8(void);
extern void func_019DC0(int state, int arg);
extern void func_0C2D00(void);
extern void func_025780(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3);
extern void func_0CD578(void);
extern int func_0B7C50(char *o, int arg);
extern int func_12F9E8(int idx, int val);

void func_0CD010(void)
{
    struct Ent *ent;
    struct Rec *rec;
    unsigned int pad;

    ent = 0;
    pad = func_085978(0x6B10);
    rec = (struct Rec *)func_0B89B0(D_003187A8);
    if (rec != 0) {
        ent = &D_001F2198[rec->idx];
    }
    if (pad & 0x8) {
        func_0B45C8(0);
        func_019DC0(4, 0);
    } else if (pad & 0x1000) {
        func_0B45C8(0);
        if (func_0BB0C8() == 0) {
            func_019DC0(4, 0);
        }
    } else if (pad & 0x4000) {
        if (ent != 0) {
            func_0B45C8(1);
            if (ent->w4 == 5) {
                if (ent->w8 == 0 || ent->w8 == 2) {
                    g_RENDEREFFECT_SWIRLY_Active = 1;
                }
            }
            if (D_001E3251 != 0) {
                func_0C2D00();
            }
            func_025780(ent->w4, ent->w8, 0, (int)func_0CD578, 0, 0, -1, 0);
        } else {
            func_0B45C8(0xC);
        }
    } else {
        func_0B7C50(D_003187A8, pad);
    }
    if (rec != 0 && ent != 0 && ent->wC != 0) {
        func_12F9E8(0, ent->wC);
    }
}
