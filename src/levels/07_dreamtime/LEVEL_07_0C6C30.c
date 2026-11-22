/* LEVEL_07:0x0C6C30 -- placement copy of LEVEL_01_0C4BD0.c: draws the pause panel texts: title, optional icon rows for the selected entry, the entry's cached label and the footer. */

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

extern char D_0033EDE0[];
extern Entry *D_0033EEE0[];
extern int D_00227E80[];
extern Panel D_0033EE88;
extern Obj *D_00214E0C;

extern void func_0B0AA8(float f, int a, unsigned int b);
extern int func_0B0708(int id, short *buf, float f);
extern int func_0AA680(short *buf);
extern int func_1354B0(int id);
extern int func_134F48(int a, int b);
extern void func_0AC790(int x, int y, int text);
extern void func_0ACEA0(int x, int y, int text);
extern Obj *func_0BC468(char *p);
extern void func_0BC4C0(char *p);
extern void func_137158(int slot, short *buf, unsigned int c);
extern void func_0AD4C8(Panel *p);
extern void func_0AD500(Panel *p);

void func_0C6C30(void)
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

    func_0B0AA8(0.0f, 0x38, 0xFFFFFFFF);
    func_0B0708(0x218, buf, 0.0f);
    x = func_0AA680(buf);
    y = buf[6];
    func_0AC790(x, y, func_1354B0(0x24D));
    o = func_0BC468(D_0033EDE0);
    if (o != 0) {
        e = D_0033EEE0[o->idx_d4];
        if (D_00227E80[e->a_30] != 0) {
            func_0B0708(0x213, buf, 0.0f);
            func_137158(0, buf, 0xFFFFFFFF);
        }
        if (e->b_34 != 0) {
            func_0B0708(0x217, buf, 0.0f);
            func_137158(1, buf, 0xFFFFFFFF);
        }
        D_0033EE88.w_14 = func_1354B0(o->id_d0);
        if (D_00214E0C != o) {
            func_0AD4C8(&D_0033EE88);
            D_00214E0C = o;
        }
        func_0AD500(&D_0033EE88);
    }
    func_0BC4C0(D_0033EDE0);
    func_0B0708(0x20E, buf, 0.0f);
    x2 = buf[4];
    y2 = buf[6];
    func_0ACEA0(x2, y2, func_1354B0(0x1CA));
    if (o != 0) {
        func_0B0708(0x214, buf2, 0.0f);
        text = func_134F48(D_0033EEE0[o->idx_d4]->a_30, 0);
        func_0ACEA0(buf2[4], buf2[2], text);
    }
}
