/* LEVEL_09:0x0C1E80 -- placement copy of LEVEL_01_0C4BD0.c: draws the pause panel texts: title, optional icon rows for the selected entry, the entry's cached label and the footer. */

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

extern char D_00310C60[];
extern Entry *D_00310D60[];
extern int D_001FCD80[];
extern Panel D_00310D08;
extern Obj *D_001EA90C;

extern void func_0ABD58(float f, int a, unsigned int b);
extern int func_0AB9B8(int id, short *buf, float f);
extern int func_0A5930(short *buf);
extern int func_12B448(int id);
extern int func_12AEE0(int a, int b);
extern void func_0A7A40(int x, int y, int text);
extern void func_0A8150(int x, int y, int text);
extern Obj *func_0B76B8(char *p);
extern void func_0B7710(char *p);
extern void func_12D0F0(int slot, short *buf, unsigned int c);
extern void func_0A8778(Panel *p);
extern void func_0A87B0(Panel *p);

void func_0C1E80(void)
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

    func_0ABD58(0.0f, 0x38, 0xFFFFFFFF);
    func_0AB9B8(0x218, buf, 0.0f);
    x = func_0A5930(buf);
    y = buf[6];
    func_0A7A40(x, y, func_12B448(0x24D));
    o = func_0B76B8(D_00310C60);
    if (o != 0) {
        e = D_00310D60[o->idx_d4];
        if (D_001FCD80[e->a_30] != 0) {
            func_0AB9B8(0x213, buf, 0.0f);
            func_12D0F0(0, buf, 0xFFFFFFFF);
        }
        if (e->b_34 != 0) {
            func_0AB9B8(0x217, buf, 0.0f);
            func_12D0F0(1, buf, 0xFFFFFFFF);
        }
        D_00310D08.w_14 = func_12B448(o->id_d0);
        if (D_001EA90C != o) {
            func_0A8778(&D_00310D08);
            D_001EA90C = o;
        }
        func_0A87B0(&D_00310D08);
    }
    func_0B7710(D_00310C60);
    func_0AB9B8(0x20E, buf, 0.0f);
    x2 = buf[4];
    y2 = buf[6];
    func_0A8150(x2, y2, func_12B448(0x1CA));
    if (o != 0) {
        func_0AB9B8(0x214, buf2, 0.0f);
        text = func_12AEE0(D_00310D60[o->idx_d4]->a_30, 0);
        func_0A8150(buf2[4], buf2[2], text);
    }
}
