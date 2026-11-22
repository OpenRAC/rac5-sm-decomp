/* LEVEL_10:0x0CFEA8 -- placement copy of LEVEL_01_0CEA68.c: menu input handler: on cancel or confirm plays the cue and changes the global state, on select plays the cue for the highlighted entry, arms the swirl effect for entry kinds 5/0/2, starts the entry's action; otherwise passes the pad bits on, then refreshes the entry's item. */
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
extern char D_00335CE8[];
extern struct Ent D_0020BE18[];
extern unsigned char D_001FCED1;
extern unsigned int func_088388(int value);
extern int func_0BB750(char *p);
extern int func_0B71F8(int index);
extern int func_0BDE70(void);
extern void func_019EA8(int state, int arg);
extern void func_0C5AA8(void);
extern void func_026150(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3);
extern void func_0D0410(void);
extern int func_0BA9F0(char *o, int arg);
extern int func_131EF0(int idx, int val);

void func_0CFEA8(void)
{
    struct Ent *ent;
    struct Rec *rec;
    unsigned int pad;

    ent = 0;
    pad = func_088388(0x6B10);
    rec = (struct Rec *)func_0BB750(D_00335CE8);
    if (rec != 0) {
        ent = &D_0020BE18[rec->idx];
    }
    if (pad & 0x8) {
        func_0B71F8(0);
        func_019EA8(4, 0);
    } else if (pad & 0x1000) {
        func_0B71F8(0);
        if (func_0BDE70() == 0) {
            func_019EA8(4, 0);
        }
    } else if (pad & 0x4000) {
        if (ent != 0) {
            func_0B71F8(1);
            if (ent->w4 == 5) {
                if (ent->w8 == 0 || ent->w8 == 2) {
                    g_RENDEREFFECT_SWIRLY_Active = 1;
                }
            }
            if (D_001FCED1 != 0) {
                func_0C5AA8();
            }
            func_026150(ent->w4, ent->w8, 0, (int)func_0D0410, 0, 0, -1, 0);
        } else {
            func_0B71F8(0xC);
        }
    } else {
        func_0BA9F0(D_00335CE8, pad);
    }
    if (rec != 0 && ent != 0 && ent->wC != 0) {
        func_131EF0(0, ent->wC);
    }
}
