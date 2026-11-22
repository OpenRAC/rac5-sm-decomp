/* LEVEL_16:0x0BE168 -- placement copy of LEVEL_01_0CEA68.c: menu input handler: on cancel or confirm plays the cue and changes the global state, on select plays the cue for the highlighted entry, arms the swirl effect for entry kinds 5/0/2, starts the entry's action; otherwise passes the pad bits on, then refreshes the entry's item. */
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
extern char D_0027A968[];
extern struct Ent D_001B0CC8[];
extern unsigned char D_001A19D9;
extern unsigned int func_0795B8(int value);
extern int func_0A9458(char *p);
extern int func_0A50B0(int index);
extern int func_0ABFA8(void);
extern void func_018B98(int state, int arg);
extern void func_0B3C10(void);
extern void func_024308(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3);
extern void func_0BE6D0(void);
extern int func_0A86F8(char *o, int arg);
extern int func_110DE0(int idx, int val);

void func_0BE168(void)
{
    struct Ent *ent;
    struct Rec *rec;
    unsigned int pad;

    ent = 0;
    pad = func_0795B8(0x6B10);
    rec = (struct Rec *)func_0A9458(D_0027A968);
    if (rec != 0) {
        ent = &D_001B0CC8[rec->idx];
    }
    if (pad & 0x8) {
        func_0A50B0(0);
        func_018B98(4, 0);
    } else if (pad & 0x1000) {
        func_0A50B0(0);
        if (func_0ABFA8() == 0) {
            func_018B98(4, 0);
        }
    } else if (pad & 0x4000) {
        if (ent != 0) {
            func_0A50B0(1);
            if (ent->w4 == 5) {
                if (ent->w8 == 0 || ent->w8 == 2) {
                    g_RENDEREFFECT_SWIRLY_Active = 1;
                }
            }
            if (D_001A19D9 != 0) {
                func_0B3C10();
            }
            func_024308(ent->w4, ent->w8, 0, (int)func_0BE6D0, 0, 0, -1, 0);
        } else {
            func_0A50B0(0xC);
        }
    } else {
        func_0A86F8(D_0027A968, pad);
    }
    if (rec != 0 && ent != 0 && ent->wC != 0) {
        func_110DE0(0, ent->wC);
    }
}
