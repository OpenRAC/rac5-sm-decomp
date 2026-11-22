/* LEVEL_22:0x0BCFB0 -- placement copy of LEVEL_01_0CEA68.c: menu input handler: on cancel or confirm plays the cue and changes the global state, on select plays the cue for the highlighted entry, arms the swirl effect for entry kinds 5/0/2, starts the entry's action; otherwise passes the pad bits on, then refreshes the entry's item. */
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
extern char D_002824A8[];
extern struct Ent D_00162198[];
extern unsigned char D_00153251;
extern unsigned int func_079438(int value);
extern int func_0A88B0(char *p);
extern int func_0A4570(int index);
extern int func_0AAFD0(void);
extern void func_016E40(int state, int arg);
extern void func_0B2C08(void);
extern void func_021500(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3);
extern void func_0BD518(void);
extern int func_0A7B50(char *o, int arg);
extern int func_10B540(int idx, int val);

void func_0BCFB0(void)
{
    struct Ent *ent;
    struct Rec *rec;
    unsigned int pad;

    ent = 0;
    pad = func_079438(0x6B10);
    rec = (struct Rec *)func_0A88B0(D_002824A8);
    if (rec != 0) {
        ent = &D_00162198[rec->idx];
    }
    if (pad & 0x8) {
        func_0A4570(0);
        func_016E40(4, 0);
    } else if (pad & 0x1000) {
        func_0A4570(0);
        if (func_0AAFD0() == 0) {
            func_016E40(4, 0);
        }
    } else if (pad & 0x4000) {
        if (ent != 0) {
            func_0A4570(1);
            if (ent->w4 == 5) {
                if (ent->w8 == 0 || ent->w8 == 2) {
                    g_RENDEREFFECT_SWIRLY_Active = 1;
                }
            }
            if (D_00153251 != 0) {
                func_0B2C08();
            }
            func_021500(ent->w4, ent->w8, 0, (int)func_0BD518, 0, 0, -1, 0);
        } else {
            func_0A4570(0xC);
        }
    } else {
        func_0A7B50(D_002824A8, pad);
    }
    if (rec != 0 && ent != 0 && ent->wC != 0) {
        func_10B540(0, ent->wC);
    }
}
