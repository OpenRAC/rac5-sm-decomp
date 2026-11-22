/* LEVEL_03:0x0CE850 -- placement copy of LEVEL_01_0CEA68.c: menu input handler: on cancel or confirm plays the cue and changes the global state, on select plays the cue for the highlighted entry, arms the swirl effect for entry kinds 5/0/2, starts the entry's action; otherwise passes the pad bits on, then refreshes the entry's item. */
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
extern char D_00347768[];
extern struct Ent D_0021B498[];
extern unsigned char D_0020C551;
extern unsigned int func_087E78(int value);
extern int func_0BA1F0(char *p);
extern int func_0B5E08(int index);
extern int func_0BC908(void);
extern void func_01A590(int state, int arg);
extern void func_0C4540(void);
extern void func_026750(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3);
extern void func_0CEDB8(void);
extern int func_0B9490(char *o, int arg);
extern int func_132438(int idx, int val);

void func_0CE850(void)
{
    struct Ent *ent;
    struct Rec *rec;
    unsigned int pad;

    ent = 0;
    pad = func_087E78(0x6B10);
    rec = (struct Rec *)func_0BA1F0(D_00347768);
    if (rec != 0) {
        ent = &D_0021B498[rec->idx];
    }
    if (pad & 0x8) {
        func_0B5E08(0);
        func_01A590(4, 0);
    } else if (pad & 0x1000) {
        func_0B5E08(0);
        if (func_0BC908() == 0) {
            func_01A590(4, 0);
        }
    } else if (pad & 0x4000) {
        if (ent != 0) {
            func_0B5E08(1);
            if (ent->w4 == 5) {
                if (ent->w8 == 0 || ent->w8 == 2) {
                    g_RENDEREFFECT_SWIRLY_Active = 1;
                }
            }
            if (D_0020C551 != 0) {
                func_0C4540();
            }
            func_026750(ent->w4, ent->w8, 0, (int)func_0CEDB8, 0, 0, -1, 0);
        } else {
            func_0B5E08(0xC);
        }
    } else {
        func_0B9490(D_00347768, pad);
    }
    if (rec != 0 && ent != 0 && ent->wC != 0) {
        func_132438(0, ent->wC);
    }
}
