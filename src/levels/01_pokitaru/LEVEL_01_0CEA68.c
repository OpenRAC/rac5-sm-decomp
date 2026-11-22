/* LEVEL_01:0x0CEA68 -- menu input handler: on cancel or confirm plays the cue and changes the global state, on select plays the cue for the highlighted entry, arms the swirl effect for entry kinds 5/0/2, starts the entry's action; otherwise passes the pad bits on, then refreshes the entry's item. */
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
extern char D_0032C8E8[];
extern struct Ent D_00202E18[];
extern unsigned char D_001F3ED1;
extern unsigned int func_088020(int value);
extern int func_0BA408(char *p);
extern int func_0B6020(int index);
extern int func_0BCB20(void);
extern void func_01A828(int state, int arg);
extern void func_0C4758(void);
extern void func_026870(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3);
extern void func_0CEFD0(void);
extern int func_0B96A8(char *o, int arg);
extern int func_134070(int idx, int val);

void func_0CEA68(void)
{
    struct Ent *ent;
    struct Rec *rec;
    unsigned int pad;

    ent = 0;
    pad = func_088020(0x6B10);
    rec = (struct Rec *)func_0BA408(D_0032C8E8);
    if (rec != 0) {
        ent = &D_00202E18[rec->idx];
    }
    if (pad & 0x8) {
        func_0B6020(0);
        func_01A828(4, 0);
    } else if (pad & 0x1000) {
        func_0B6020(0);
        if (func_0BCB20() == 0) {
            func_01A828(4, 0);
        }
    } else if (pad & 0x4000) {
        if (ent != 0) {
            func_0B6020(1);
            if (ent->w4 == 5) {
                if (ent->w8 == 0 || ent->w8 == 2) {
                    g_RENDEREFFECT_SWIRLY_Active = 1;
                }
            }
            if (D_001F3ED1 != 0) {
                func_0C4758();
            }
            func_026870(ent->w4, ent->w8, 0, (int)func_0CEFD0, 0, 0, -1, 0);
        } else {
            func_0B6020(0xC);
        }
    } else {
        func_0B96A8(D_0032C8E8, pad);
    }
    if (rec != 0 && ent != 0 && ent->wC != 0) {
        func_134070(0, ent->wC);
    }
}
