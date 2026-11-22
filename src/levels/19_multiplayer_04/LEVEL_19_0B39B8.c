/* LEVEL_19:0x0B39B8 -- placement copy of LEVEL_01_0C4BD0.c: draws the pause panel texts: title, optional icon rows for the selected entry, the entry's cached label and the footer. */

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

extern char D_002775A0[];
extern Entry *D_002776A0[];
extern int D_001C90C0[];
extern Panel D_00277648;
extern Obj *D_001AFD04;

extern void func_09CA28(float f, int a, unsigned int b);
extern int func_09C688(int id, short *buf, float f);
extern int func_0965A0(short *buf);
extern int func_10F9D0(int id);
extern int func_10F468(int a, int b);
extern void func_098710(int x, int y, int text);
extern void func_098E20(int x, int y, int text);
extern Obj *func_0A8D30(char *p);
extern void func_0A8D88(char *p);
extern void func_111568(int slot, short *buf, unsigned int c);
extern void func_099448(Panel *p);
extern void func_099480(Panel *p);

void func_0B39B8(void)
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

    func_09CA28(0.0f, 0x38, 0xFFFFFFFF);
    func_09C688(0x218, buf, 0.0f);
    x = func_0965A0(buf);
    y = buf[6];
    func_098710(x, y, func_10F9D0(0x24D));
    o = func_0A8D30(D_002775A0);
    if (o != 0) {
        e = D_002776A0[o->idx_d4];
        if (D_001C90C0[e->a_30] != 0) {
            func_09C688(0x213, buf, 0.0f);
            func_111568(0, buf, 0xFFFFFFFF);
        }
        if (e->b_34 != 0) {
            func_09C688(0x217, buf, 0.0f);
            func_111568(1, buf, 0xFFFFFFFF);
        }
        D_00277648.w_14 = func_10F9D0(o->id_d0);
        if (D_001AFD04 != o) {
            func_099448(&D_00277648);
            D_001AFD04 = o;
        }
        func_099480(&D_00277648);
    }
    func_0A8D88(D_002775A0);
    func_09C688(0x20E, buf, 0.0f);
    x2 = buf[4];
    y2 = buf[6];
    func_098E20(x2, y2, func_10F9D0(0x1CA));
    if (o != 0) {
        func_09C688(0x214, buf2, 0.0f);
        text = func_10F468(D_002776A0[o->idx_d4]->a_30, 0);
        func_098E20(buf2[4], buf2[2], text);
    }
}
