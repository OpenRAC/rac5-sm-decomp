/* LEVEL_22:0x0B3080 -- placement copy of LEVEL_01_0C4BD0.c: draws the pause panel texts: title, optional icon rows for the selected entry, the entry's cached label and the footer. */

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

extern char D_0027F0A0[];
extern Entry *D_0027F1A0[];
extern int D_00170600[];
extern Panel D_0027F148;
extern Obj *D_0015FE8C;

extern void func_09D0B8(float f, int a, unsigned int b);
extern int func_09CD18(int id, short *buf, float f);
extern int func_096C90(short *buf);
extern int func_109980(int id);
extern int func_109418(int a, int b);
extern void func_098DA0(int x, int y, int text);
extern void func_0994B0(int x, int y, int text);
extern Obj *func_0A88B0(char *p);
extern void func_0A8908(char *p);
extern void func_10B628(int slot, short *buf, unsigned int c);
extern void func_099AD8(Panel *p);
extern void func_099B10(Panel *p);

void func_0B3080(void)
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

    func_09D0B8(0.0f, 0x38, 0xFFFFFFFF);
    func_09CD18(0x218, buf, 0.0f);
    x = func_096C90(buf);
    y = buf[6];
    func_098DA0(x, y, func_109980(0x24D));
    o = func_0A88B0(D_0027F0A0);
    if (o != 0) {
        e = D_0027F1A0[o->idx_d4];
        if (D_00170600[e->a_30] != 0) {
            func_09CD18(0x213, buf, 0.0f);
            func_10B628(0, buf, 0xFFFFFFFF);
        }
        if (e->b_34 != 0) {
            func_09CD18(0x217, buf, 0.0f);
            func_10B628(1, buf, 0xFFFFFFFF);
        }
        D_0027F148.w_14 = func_109980(o->id_d0);
        if (D_0015FE8C != o) {
            func_099AD8(&D_0027F148);
            D_0015FE8C = o;
        }
        func_099B10(&D_0027F148);
    }
    func_0A8908(D_0027F0A0);
    func_09CD18(0x20E, buf, 0.0f);
    x2 = buf[4];
    y2 = buf[6];
    func_0994B0(x2, y2, func_109980(0x1CA));
    if (o != 0) {
        func_09CD18(0x214, buf2, 0.0f);
        text = func_109418(D_0027F1A0[o->idx_d4]->a_30, 0);
        func_0994B0(buf2[4], buf2[2], text);
    }
}
