/* LEVEL_21:0x0A5218 -- placement copy of LEVEL_01_0C4BD0.c: draws the pause panel texts: title, optional icon rows for the selected entry, the entry's cached label and the footer. */

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

extern char D_00240D20[];
extern Entry *D_00240E20[];
extern int D_00167900[];
extern Panel D_00240DC8;
extern Obj *D_0015578C;

extern void func_08F370(float f, int a, unsigned int b);
extern int func_08EFD0(int id, short *buf, float f);
extern int func_088F48(short *buf);
extern int func_0F1378(int id);
extern int func_0F0E10(int a, int b);
extern void func_08B058(int x, int y, int text);
extern void func_08B768(int x, int y, int text);
extern Obj *func_09AA50(char *p);
extern void func_09AAA8(char *p);
extern void func_0F3020(int slot, short *buf, unsigned int c);
extern void func_08BD90(Panel *p);
extern void func_08BDC8(Panel *p);

void func_0A5218(void)
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

    func_08F370(0.0f, 0x38, 0xFFFFFFFF);
    func_08EFD0(0x218, buf, 0.0f);
    x = func_088F48(buf);
    y = buf[6];
    func_08B058(x, y, func_0F1378(0x24D));
    o = func_09AA50(D_00240D20);
    if (o != 0) {
        e = D_00240E20[o->idx_d4];
        if (D_00167900[e->a_30] != 0) {
            func_08EFD0(0x213, buf, 0.0f);
            func_0F3020(0, buf, 0xFFFFFFFF);
        }
        if (e->b_34 != 0) {
            func_08EFD0(0x217, buf, 0.0f);
            func_0F3020(1, buf, 0xFFFFFFFF);
        }
        D_00240DC8.w_14 = func_0F1378(o->id_d0);
        if (D_0015578C != o) {
            func_08BD90(&D_00240DC8);
            D_0015578C = o;
        }
        func_08BDC8(&D_00240DC8);
    }
    func_09AAA8(D_00240D20);
    func_08EFD0(0x20E, buf, 0.0f);
    x2 = buf[4];
    y2 = buf[6];
    func_08B768(x2, y2, func_0F1378(0x1CA));
    if (o != 0) {
        func_08EFD0(0x214, buf2, 0.0f);
        text = func_0F0E10(D_00240E20[o->idx_d4]->a_30, 0);
        func_08B768(buf2[4], buf2[2], text);
    }
}
