/* LEVEL_16:0x0B40E0 -- placement copy of LEVEL_01_0C4BD0.c: draws the pause panel texts: title, optional icon rows for the selected entry, the entry's cached label and the footer. */

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

extern char D_00277420[];
extern Entry *D_00277520[];
extern int D_001C7EC0[];
extern Panel D_002774C8;
extern Obj *D_001AEB84;

extern void func_09D198(float f, int a, unsigned int b);
extern int func_09CDF8(int id, short *buf, float f);
extern int func_096D10(short *buf);
extern int func_10F330(int id);
extern int func_10EDC8(int a, int b);
extern void func_098E80(int x, int y, int text);
extern void func_099590(int x, int y, int text);
extern Obj *func_0A9458(char *p);
extern void func_0A94B0(char *p);
extern void func_110EC8(int slot, short *buf, unsigned int c);
extern void func_099BB8(Panel *p);
extern void func_099BF0(Panel *p);

void func_0B40E0(void)
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

    func_09D198(0.0f, 0x38, 0xFFFFFFFF);
    func_09CDF8(0x218, buf, 0.0f);
    x = func_096D10(buf);
    y = buf[6];
    func_098E80(x, y, func_10F330(0x24D));
    o = func_0A9458(D_00277420);
    if (o != 0) {
        e = D_00277520[o->idx_d4];
        if (D_001C7EC0[e->a_30] != 0) {
            func_09CDF8(0x213, buf, 0.0f);
            func_110EC8(0, buf, 0xFFFFFFFF);
        }
        if (e->b_34 != 0) {
            func_09CDF8(0x217, buf, 0.0f);
            func_110EC8(1, buf, 0xFFFFFFFF);
        }
        D_002774C8.w_14 = func_10F330(o->id_d0);
        if (D_001AEB84 != o) {
            func_099BB8(&D_002774C8);
            D_001AEB84 = o;
        }
        func_099BF0(&D_002774C8);
    }
    func_0A94B0(D_00277420);
    func_09CDF8(0x20E, buf, 0.0f);
    x2 = buf[4];
    y2 = buf[6];
    func_099590(x2, y2, func_10F330(0x1CA));
    if (o != 0) {
        func_09CDF8(0x214, buf2, 0.0f);
        text = func_10EDC8(D_00277520[o->idx_d4]->a_30, 0);
        func_099590(buf2[4], buf2[2], text);
    }
}
