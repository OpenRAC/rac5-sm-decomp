/* LEVEL_01:0x0C4BD0 -- draws the pause panel texts: title, optional icon rows for the selected entry, the entry's cached label and the footer. */

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

extern char D_003294E0[];
extern Entry *D_003295E0[];
extern int D_00213180[];
extern Panel D_00329588;
extern Obj *D_00200B0C;

extern void func_0AEAA8(float f, int a, unsigned int b);
extern int func_0AE708(int id, short *buf, float f);
extern int func_0A8680(short *buf);
extern int func_1324B0(int id);
extern int func_131F48(int a, int b);
extern void func_0AA790(int x, int y, int text);
extern void func_0AAEA0(int x, int y, int text);
extern Obj *func_0BA408(char *p);
extern void func_0BA460(char *p);
extern void func_134158(int slot, short *buf, unsigned int c);
extern void func_0AB4C8(Panel *p);
extern void func_0AB500(Panel *p);

void func_0C4BD0(void)
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

    func_0AEAA8(0.0f, 0x38, 0xFFFFFFFF);
    func_0AE708(0x218, buf, 0.0f);
    x = func_0A8680(buf);
    y = buf[6];
    func_0AA790(x, y, func_1324B0(0x24D));
    o = func_0BA408(D_003294E0);
    if (o != 0) {
        e = D_003295E0[o->idx_d4];
        if (D_00213180[e->a_30] != 0) {
            func_0AE708(0x213, buf, 0.0f);
            func_134158(0, buf, 0xFFFFFFFF);
        }
        if (e->b_34 != 0) {
            func_0AE708(0x217, buf, 0.0f);
            func_134158(1, buf, 0xFFFFFFFF);
        }
        D_00329588.w_14 = func_1324B0(o->id_d0);
        if (D_00200B0C != o) {
            func_0AB4C8(&D_00329588);
            D_00200B0C = o;
        }
        func_0AB500(&D_00329588);
    }
    func_0BA460(D_003294E0);
    func_0AE708(0x20E, buf, 0.0f);
    x2 = buf[4];
    y2 = buf[6];
    func_0AAEA0(x2, y2, func_1324B0(0x1CA));
    if (o != 0) {
        func_0AE708(0x214, buf2, 0.0f);
        text = func_131F48(D_003295E0[o->idx_d4]->a_30, 0);
        func_0AAEA0(buf2[4], buf2[2], text);
    }
}
