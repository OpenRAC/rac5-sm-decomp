/* LEVEL_24:0x0BE498 -- placement copy of LEVEL_01_0C4BD0.c: draws the pause panel texts: title, optional icon rows for the selected entry, the entry's cached label and the footer. */

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

extern char D_002F53A0[];
extern Entry *D_002F54A0[];
extern int D_001E3F00[];
extern Panel D_002F5448;
extern Obj *D_001D178C;

extern void func_0A8320(float f, int a, unsigned int b);
extern int func_0A7F80(int id, short *buf, float f);
extern int func_0A1EF8(short *buf);
extern int func_127FB0(int id);
extern int func_127A48(int a, int b);
extern void func_0A4008(int x, int y, int text);
extern void func_0A4718(int x, int y, int text);
extern Obj *func_0B3C98(char *p);
extern void func_0B3CF0(char *p);
extern void func_129C58(int slot, short *buf, unsigned int c);
extern void func_0A4D40(Panel *p);
extern void func_0A4D78(Panel *p);

void func_0BE498(void)
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

    func_0A8320(0.0f, 0x38, 0xFFFFFFFF);
    func_0A7F80(0x218, buf, 0.0f);
    x = func_0A1EF8(buf);
    y = buf[6];
    func_0A4008(x, y, func_127FB0(0x24D));
    o = func_0B3C98(D_002F53A0);
    if (o != 0) {
        e = D_002F54A0[o->idx_d4];
        if (D_001E3F00[e->a_30] != 0) {
            func_0A7F80(0x213, buf, 0.0f);
            func_129C58(0, buf, 0xFFFFFFFF);
        }
        if (e->b_34 != 0) {
            func_0A7F80(0x217, buf, 0.0f);
            func_129C58(1, buf, 0xFFFFFFFF);
        }
        D_002F5448.w_14 = func_127FB0(o->id_d0);
        if (D_001D178C != o) {
            func_0A4D40(&D_002F5448);
            D_001D178C = o;
        }
        func_0A4D78(&D_002F5448);
    }
    func_0B3CF0(D_002F53A0);
    func_0A7F80(0x20E, buf, 0.0f);
    x2 = buf[4];
    y2 = buf[6];
    func_0A4718(x2, y2, func_127FB0(0x1CA));
    if (o != 0) {
        func_0A7F80(0x214, buf2, 0.0f);
        text = func_127A48(D_002F54A0[o->idx_d4]->a_30, 0);
        func_0A4718(buf2[4], buf2[2], text);
    }
}
