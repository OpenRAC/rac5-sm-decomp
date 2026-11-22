/* LEVEL_04:0x0CA3E8 -- placement copy of LEVEL_01_0C4BD0.c: draws the pause panel texts: title, optional icon rows for the selected entry, the entry's cached label and the footer. */

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

extern char D_00343CE0[];
extern Entry *D_00343DE0[];
extern int D_0022CB00[];
extern Panel D_00343D88;
extern Obj *D_00219FCC;

extern void func_0B3CF8(float f, int a, unsigned int b);
extern int func_0B3958(int id, short *buf, float f);
extern int func_0AD890(short *buf);
extern int func_13E930(int id);
extern int func_13E3C8(int a, int b);
extern void func_0AF9E0(int x, int y, int text);
extern void func_0B00F0(int x, int y, int text);
extern Obj *func_0BFBE8(char *p);
extern void func_0BFC40(char *p);
extern void func_1405D8(int slot, short *buf, unsigned int c);
extern void func_0B0718(Panel *p);
extern void func_0B0750(Panel *p);

void func_0CA3E8(void)
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

    func_0B3CF8(0.0f, 0x38, 0xFFFFFFFF);
    func_0B3958(0x218, buf, 0.0f);
    x = func_0AD890(buf);
    y = buf[6];
    func_0AF9E0(x, y, func_13E930(0x24D));
    o = func_0BFBE8(D_00343CE0);
    if (o != 0) {
        e = D_00343DE0[o->idx_d4];
        if (D_0022CB00[e->a_30] != 0) {
            func_0B3958(0x213, buf, 0.0f);
            func_1405D8(0, buf, 0xFFFFFFFF);
        }
        if (e->b_34 != 0) {
            func_0B3958(0x217, buf, 0.0f);
            func_1405D8(1, buf, 0xFFFFFFFF);
        }
        D_00343D88.w_14 = func_13E930(o->id_d0);
        if (D_00219FCC != o) {
            func_0B0718(&D_00343D88);
            D_00219FCC = o;
        }
        func_0B0750(&D_00343D88);
    }
    func_0BFC40(D_00343CE0);
    func_0B3958(0x20E, buf, 0.0f);
    x2 = buf[4];
    y2 = buf[6];
    func_0B00F0(x2, y2, func_13E930(0x1CA));
    if (o != 0) {
        func_0B3958(0x214, buf2, 0.0f);
        text = func_13E3C8(D_00343DE0[o->idx_d4]->a_30, 0);
        func_0B00F0(buf2[4], buf2[2], text);
    }
}
