/* LEVEL_17:0x0BD6A8 -- placement copy of LEVEL_01_0CEA68.c: menu input handler: on cancel or confirm plays the cue and changes the global state, on select plays the cue for the highlighted entry, arms the swirl effect for entry kinds 5/0/2, starts the entry's action; otherwise passes the pad bits on, then refreshes the entry's item. */
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
extern char D_0026BC68[];
extern struct Ent D_001A42C8[];
extern unsigned char D_00194FD9;
extern unsigned int func_07A030(int value);
extern int func_0A8998(char *p);
extern int func_0A4590(int index);
extern int func_0AB4E8(void);
extern void func_018518(int state, int arg);
extern void func_0B3150(void);
extern void func_023C88(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3);
extern void func_0BDC10(void);
extern int func_0A7C38(char *o, int arg);
extern int func_110358(int idx, int val);

void func_0BD6A8(void)
{
    struct Ent *ent;
    struct Rec *rec;
    unsigned int pad;

    ent = 0;
    pad = func_07A030(0x6B10);
    rec = (struct Rec *)func_0A8998(D_0026BC68);
    if (rec != 0) {
        ent = &D_001A42C8[rec->idx];
    }
    if (pad & 0x8) {
        func_0A4590(0);
        func_018518(4, 0);
    } else if (pad & 0x1000) {
        func_0A4590(0);
        if (func_0AB4E8() == 0) {
            func_018518(4, 0);
        }
    } else if (pad & 0x4000) {
        if (ent != 0) {
            func_0A4590(1);
            if (ent->w4 == 5) {
                if (ent->w8 == 0 || ent->w8 == 2) {
                    g_RENDEREFFECT_SWIRLY_Active = 1;
                }
            }
            if (D_00194FD9 != 0) {
                func_0B3150();
            }
            func_023C88(ent->w4, ent->w8, 0, (int)func_0BDC10, 0, 0, -1, 0);
        } else {
            func_0A4590(0xC);
        }
    } else {
        func_0A7C38(D_0026BC68, pad);
    }
    if (rec != 0 && ent != 0 && ent->wC != 0) {
        func_110358(0, ent->wC);
    }
}
