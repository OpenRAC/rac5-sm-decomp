/* LEVEL_20:0x0A8698 -- placement copy of LEVEL_01_0CEA68.c: menu input handler: on cancel or confirm plays the cue and changes the global state, on select plays the cue for the highlighted entry, arms the swirl effect for entry kinds 5/0/2, starts the entry's action; otherwise passes the pad bits on, then refreshes the entry's item. */
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
extern char D_0019E1A8[];
extern struct Ent D_001133A8[];
extern unsigned char D_001040B9;
extern unsigned int func_067228(int value);
extern int func_093988(char *p);
extern int func_08F6B0(int index);
extern int func_0964D8(void);
extern void func_016950(int state, int arg);
extern void func_09E140(void);
extern void func_020FB0(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3);
extern void func_0A8C00(void);
extern int func_092C28(char *o, int arg);
extern int func_0E3BC8(int idx, int val);

void func_0A8698(void)
{
    struct Ent *ent;
    struct Rec *rec;
    unsigned int pad;

    ent = 0;
    pad = func_067228(0x6B10);
    rec = (struct Rec *)func_093988(D_0019E1A8);
    if (rec != 0) {
        ent = &D_001133A8[rec->idx];
    }
    if (pad & 0x8) {
        func_08F6B0(0);
        func_016950(4, 0);
    } else if (pad & 0x1000) {
        func_08F6B0(0);
        if (func_0964D8() == 0) {
            func_016950(4, 0);
        }
    } else if (pad & 0x4000) {
        if (ent != 0) {
            func_08F6B0(1);
            if (ent->w4 == 5) {
                if (ent->w8 == 0 || ent->w8 == 2) {
                    g_RENDEREFFECT_SWIRLY_Active = 1;
                }
            }
            if (D_001040B9 != 0) {
                func_09E140();
            }
            func_020FB0(ent->w4, ent->w8, 0, (int)func_0A8C00, 0, 0, -1, 0);
        } else {
            func_08F6B0(0xC);
        }
    } else {
        func_092C28(D_0019E1A8, pad);
    }
    if (rec != 0 && ent != 0 && ent->wC != 0) {
        func_0E3BC8(0, ent->wC);
    }
}
