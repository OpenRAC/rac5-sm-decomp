/* LEVEL_15:0x0AF0B0 -- placement copy of LEVEL_01_0CEA68.c: menu input handler: on cancel or confirm plays the cue and changes the global state, on select plays the cue for the highlighted entry, arms the swirl effect for entry kinds 5/0/2, starts the entry's action; otherwise passes the pad bits on, then refreshes the entry's item. */
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
extern char D_00244128[];
extern struct Ent D_00157A98[];
extern unsigned char D_00148B51;
extern unsigned int func_06C700(int value);
extern int func_09AA50(char *p);
extern int func_096530(int index);
extern int func_09D168(void);
extern void func_016A10(int state, int arg);
extern void func_0A4DA0(void);
extern void func_020A30(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3);
extern void func_0AF618(void);
extern int func_099CF0(char *o, int arg);
extern int func_0F2F38(int idx, int val);

void func_0AF0B0(void)
{
    struct Ent *ent;
    struct Rec *rec;
    unsigned int pad;

    ent = 0;
    pad = func_06C700(0x6B10);
    rec = (struct Rec *)func_09AA50(D_00244128);
    if (rec != 0) {
        ent = &D_00157A98[rec->idx];
    }
    if (pad & 0x8) {
        func_096530(0);
        func_016A10(4, 0);
    } else if (pad & 0x1000) {
        func_096530(0);
        if (func_09D168() == 0) {
            func_016A10(4, 0);
        }
    } else if (pad & 0x4000) {
        if (ent != 0) {
            func_096530(1);
            if (ent->w4 == 5) {
                if (ent->w8 == 0 || ent->w8 == 2) {
                    g_RENDEREFFECT_SWIRLY_Active = 1;
                }
            }
            if (D_00148B51 != 0) {
                func_0A4DA0();
            }
            func_020A30(ent->w4, ent->w8, 0, (int)func_0AF618, 0, 0, -1, 0);
        } else {
            func_096530(0xC);
        }
    } else {
        func_099CF0(D_00244128, pad);
    }
    if (rec != 0 && ent != 0 && ent->wC != 0) {
        func_0F2F38(0, ent->wC);
    }
}
