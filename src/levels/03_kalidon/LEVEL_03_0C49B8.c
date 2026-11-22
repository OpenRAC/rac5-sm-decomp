/* LEVEL_03:0x0C49B8 -- placement copy of LEVEL_01_0C4BD0.c: draws the pause panel texts: title, optional icon rows for the selected entry, the entry's cached label and the footer. */

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

extern char D_00344360[];
extern Entry *D_00344460[];
extern int D_0022C080[];
extern Panel D_00344408;
extern Obj *D_0021918C;

extern void func_0AE828(float f, int a, unsigned int b);
extern int func_0AE488(int id, short *buf, float f);
extern int func_0A8400(short *buf);
extern int func_130878(int id);
extern int func_130310(int a, int b);
extern void func_0AA510(int x, int y, int text);
extern void func_0AAC20(int x, int y, int text);
extern Obj *func_0BA1F0(char *p);
extern void func_0BA248(char *p);
extern void func_132520(int slot, short *buf, unsigned int c);
extern void func_0AB248(Panel *p);
extern void func_0AB280(Panel *p);

void func_0C49B8(void)
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

    func_0AE828(0.0f, 0x38, 0xFFFFFFFF);
    func_0AE488(0x218, buf, 0.0f);
    x = func_0A8400(buf);
    y = buf[6];
    func_0AA510(x, y, func_130878(0x24D));
    o = func_0BA1F0(D_00344360);
    if (o != 0) {
        e = D_00344460[o->idx_d4];
        if (D_0022C080[e->a_30] != 0) {
            func_0AE488(0x213, buf, 0.0f);
            func_132520(0, buf, 0xFFFFFFFF);
        }
        if (e->b_34 != 0) {
            func_0AE488(0x217, buf, 0.0f);
            func_132520(1, buf, 0xFFFFFFFF);
        }
        D_00344408.w_14 = func_130878(o->id_d0);
        if (D_0021918C != o) {
            func_0AB248(&D_00344408);
            D_0021918C = o;
        }
        func_0AB280(&D_00344408);
    }
    func_0BA248(D_00344360);
    func_0AE488(0x20E, buf, 0.0f);
    x2 = buf[4];
    y2 = buf[6];
    func_0AAC20(x2, y2, func_130878(0x1CA));
    if (o != 0) {
        func_0AE488(0x214, buf2, 0.0f);
        text = func_130310(D_00344460[o->idx_d4]->a_30, 0);
        func_0AAC20(buf2[4], buf2[2], text);
    }
}
