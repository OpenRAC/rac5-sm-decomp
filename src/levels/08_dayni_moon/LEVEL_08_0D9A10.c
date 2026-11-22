/* LEVEL_08:0x0D9A10 -- placement copy of LEVEL_01_0CEA68.c: menu input handler: on cancel or confirm plays the cue and changes the global state, on select plays the cue for the highlighted entry, arms the swirl effect for entry kinds 5/0/2, starts the entry's action; otherwise passes the pad bits on, then refreshes the entry's item. */
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
extern char D_0037BB68[];
extern struct Ent D_0024BCD8[];
extern unsigned char D_0023CA51;
extern unsigned int func_090070(int value);
extern int func_0C52F8(char *p);
extern int func_0C0F10(int index);
extern int func_0C7A48(void);
extern void func_01B1A0(int state, int arg);
extern void func_0CF680(void);
extern void func_027100(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3);
extern void func_0D9F78(void);
extern int func_0C4598(char *o, int arg);
extern int func_1455A8(int idx, int val);

void func_0D9A10(void)
{
    struct Ent *ent;
    struct Rec *rec;
    unsigned int pad;

    ent = 0;
    pad = func_090070(0x6B10);
    rec = (struct Rec *)func_0C52F8(D_0037BB68);
    if (rec != 0) {
        ent = &D_0024BCD8[rec->idx];
    }
    if (pad & 0x8) {
        func_0C0F10(0);
        func_01B1A0(4, 0);
    } else if (pad & 0x1000) {
        func_0C0F10(0);
        if (func_0C7A48() == 0) {
            func_01B1A0(4, 0);
        }
    } else if (pad & 0x4000) {
        if (ent != 0) {
            func_0C0F10(1);
            if (ent->w4 == 5) {
                if (ent->w8 == 0 || ent->w8 == 2) {
                    g_RENDEREFFECT_SWIRLY_Active = 1;
                }
            }
            if (D_0023CA51 != 0) {
                func_0CF680();
            }
            func_027100(ent->w4, ent->w8, 0, (int)func_0D9F78, 0, 0, -1, 0);
        } else {
            func_0C0F10(0xC);
        }
    } else {
        func_0C4598(D_0037BB68, pad);
    }
    if (rec != 0 && ent != 0 && ent->wC != 0) {
        func_1455A8(0, ent->wC);
    }
}
