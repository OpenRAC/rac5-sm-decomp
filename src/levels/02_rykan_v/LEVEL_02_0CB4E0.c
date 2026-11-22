/* LEVEL_02:0x0CB4E0 -- placement copy of LEVEL_01_0C4BD0.c: draws the pause panel texts: title, optional icon rows for the selected entry, the entry's cached label and the footer. */

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

extern char D_003409E0[];
extern Entry *D_00340AE0[];
extern int D_00228100[];
extern Panel D_00340A88;
extern Obj *D_00215ACC;

extern void func_0B53B8(float f, int a, unsigned int b);
extern int func_0B5018(int id, short *buf, float f);
extern int func_0AEF90(short *buf);
extern int func_138860(int id);
extern int func_1382F8(int a, int b);
extern void func_0B10A0(int x, int y, int text);
extern void func_0B17B0(int x, int y, int text);
extern Obj *func_0C0D18(char *p);
extern void func_0C0D70(char *p);
extern void func_13A508(int slot, short *buf, unsigned int c);
extern void func_0B1DD8(Panel *p);
extern void func_0B1E10(Panel *p);

void func_0CB4E0(void)
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

    func_0B53B8(0.0f, 0x38, 0xFFFFFFFF);
    func_0B5018(0x218, buf, 0.0f);
    x = func_0AEF90(buf);
    y = buf[6];
    func_0B10A0(x, y, func_138860(0x24D));
    o = func_0C0D18(D_003409E0);
    if (o != 0) {
        e = D_00340AE0[o->idx_d4];
        if (D_00228100[e->a_30] != 0) {
            func_0B5018(0x213, buf, 0.0f);
            func_13A508(0, buf, 0xFFFFFFFF);
        }
        if (e->b_34 != 0) {
            func_0B5018(0x217, buf, 0.0f);
            func_13A508(1, buf, 0xFFFFFFFF);
        }
        D_00340A88.w_14 = func_138860(o->id_d0);
        if (D_00215ACC != o) {
            func_0B1DD8(&D_00340A88);
            D_00215ACC = o;
        }
        func_0B1E10(&D_00340A88);
    }
    func_0C0D70(D_003409E0);
    func_0B5018(0x20E, buf, 0.0f);
    x2 = buf[4];
    y2 = buf[6];
    func_0B17B0(x2, y2, func_138860(0x1CA));
    if (o != 0) {
        func_0B5018(0x214, buf2, 0.0f);
        text = func_1382F8(D_00340AE0[o->idx_d4]->a_30, 0);
        func_0B17B0(buf2[4], buf2[2], text);
    }
}
