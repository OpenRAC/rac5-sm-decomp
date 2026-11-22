/* LEVEL_17:0x0B3620 -- placement copy of LEVEL_01_0C4BD0.c: draws the pause panel texts: title, optional icon rows for the selected entry, the entry's cached label and the footer. */

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

extern char D_00268720[];
extern Entry *D_00268820[];
extern int D_001BB340[];
extern Panel D_002687C8;
extern Obj *D_001A2184;

extern void func_09C690(float f, int a, unsigned int b);
extern int func_09C2F0(int id, short *buf, float f);
extern int func_096208(short *buf);
extern int func_10E8A8(int id);
extern int func_10E340(int a, int b);
extern void func_098378(int x, int y, int text);
extern void func_098A88(int x, int y, int text);
extern Obj *func_0A8998(char *p);
extern void func_0A89F0(char *p);
extern void func_110440(int slot, short *buf, unsigned int c);
extern void func_0990B0(Panel *p);
extern void func_0990E8(Panel *p);

void func_0B3620(void)
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

    func_09C690(0.0f, 0x38, 0xFFFFFFFF);
    func_09C2F0(0x218, buf, 0.0f);
    x = func_096208(buf);
    y = buf[6];
    func_098378(x, y, func_10E8A8(0x24D));
    o = func_0A8998(D_00268720);
    if (o != 0) {
        e = D_00268820[o->idx_d4];
        if (D_001BB340[e->a_30] != 0) {
            func_09C2F0(0x213, buf, 0.0f);
            func_110440(0, buf, 0xFFFFFFFF);
        }
        if (e->b_34 != 0) {
            func_09C2F0(0x217, buf, 0.0f);
            func_110440(1, buf, 0xFFFFFFFF);
        }
        D_002687C8.w_14 = func_10E8A8(o->id_d0);
        if (D_001A2184 != o) {
            func_0990B0(&D_002687C8);
            D_001A2184 = o;
        }
        func_0990E8(&D_002687C8);
    }
    func_0A89F0(D_00268720);
    func_09C2F0(0x20E, buf, 0.0f);
    x2 = buf[4];
    y2 = buf[6];
    func_098A88(x2, y2, func_10E8A8(0x1CA));
    if (o != 0) {
        func_09C2F0(0x214, buf2, 0.0f);
        text = func_10E340(D_00268820[o->idx_d4]->a_30, 0);
        func_098A88(buf2[4], buf2[2], text);
    }
}
