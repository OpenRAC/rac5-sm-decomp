/* LEVEL_18:0x0B30B8 -- placement copy of LEVEL_01_0C4BD0.c: draws the pause panel texts: title, optional icon rows for the selected entry, the entry's cached label and the footer. */

typedef struct Obj {
    char pad_00[0xD0];
    int id_d0;
    int idx_d4;
} Obj;

typedef struct Entry {
    char pad_00[0x30];
    int a_30;
    int b_34;
} Entry;

typedef struct Panel {
    char pad_00[0x14];
    int w_14;
} Panel;

extern char D_002777A0[];
extern Entry *D_002778A0[];
extern int D_001C9440[];
extern Panel D_00277848;
extern Obj *D_001B0004;

extern void func_09C1A8(float f, int a, unsigned int b);
extern int func_09BE08(int id, short *buf, float f);
extern int func_095D20(short *buf);
extern int func_10DFE0(int id);
extern int func_10DA78(int a, int b);
extern void func_097E90(int x, int y, int text);
extern void func_0985A0(int x, int y, int text);
extern Obj *func_0A8430(char *p);
extern void func_0A8488(char *p);
extern void func_10FB78(int slot, short *buf, unsigned int c);
extern void func_098BC8(Panel *p);
extern void func_098C00(Panel *p);

void func_0B30B8(void)
{
    short buf[8];
    short buf2[8];
    short x;
    short y;
    short x2;
    short y2;
    Obj *o;
    Entry *e;
    int text;

    func_09C1A8(0.0f, 0x38, 0xFFFFFFFF);
    func_09BE08(0x218, buf, 0.0f);
    x = func_095D20(buf);
    y = buf[6];
    func_097E90(x, y, func_10DFE0(0x24D));
    o = func_0A8430(D_002777A0);
    if (o != 0) {
        e = D_002778A0[o->idx_d4];
        if (D_001C9440[e->a_30] != 0) {
            func_09BE08(0x213, buf, 0.0f);
            func_10FB78(0, buf, 0xFFFFFFFF);
        }
        if (e->b_34 != 0) {
            func_09BE08(0x217, buf, 0.0f);
            func_10FB78(1, buf, 0xFFFFFFFF);
        }
        D_00277848.w_14 = func_10DFE0(o->id_d0);
        if (D_001B0004 != o) {
            func_098BC8(&D_00277848);
            D_001B0004 = o;
        }
        func_098C00(&D_00277848);
    }
    func_0A8488(D_002777A0);
    func_09BE08(0x20E, buf, 0.0f);
    x2 = buf[4];
    y2 = buf[6];
    func_0985A0(x2, y2, func_10DFE0(0x1CA));
    if (o != 0) {
        func_09BE08(0x214, buf2, 0.0f);
        text = func_10DA78(D_002778A0[o->idx_d4]->a_30, 0);
        func_0985A0(buf2[4], buf2[2], text);
    }
}
