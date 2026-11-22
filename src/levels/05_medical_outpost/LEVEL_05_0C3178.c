/* LEVEL_05:0x0C3178 -- placement copy of LEVEL_01_0C4BD0.c: draws the pause panel texts: title, optional icon rows for the selected entry, the entry's cached label and the footer. */

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

extern char D_003153A0[];
extern Entry *D_003154A0[];
extern int D_00202080[];
extern Panel D_00315448;
extern Obj *D_001EFE8C;

extern void func_0AD068(float f, int a, unsigned int b);
extern int func_0ACCC8(int id, short *buf, float f);
extern int func_0A6C40(short *buf);
extern int func_12DE28(int id);
extern int func_12D8C0(int a, int b);
extern void func_0A8D50(int x, int y, int text);
extern void func_0A9460(int x, int y, int text);
extern Obj *func_0B89B0(char *p);
extern void func_0B8A08(char *p);
extern void func_12FAD0(int slot, short *buf, unsigned int c);
extern void func_0A9A88(Panel *p);
extern void func_0A9AC0(Panel *p);

void func_0C3178(void)
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

    func_0AD068(0.0f, 0x38, 0xFFFFFFFF);
    func_0ACCC8(0x218, buf, 0.0f);
    x = func_0A6C40(buf);
    y = buf[6];
    func_0A8D50(x, y, func_12DE28(0x24D));
    o = func_0B89B0(D_003153A0);
    if (o != 0) {
        e = D_003154A0[o->idx_d4];
        if (D_00202080[e->a_30] != 0) {
            func_0ACCC8(0x213, buf, 0.0f);
            func_12FAD0(0, buf, 0xFFFFFFFF);
        }
        if (e->b_34 != 0) {
            func_0ACCC8(0x217, buf, 0.0f);
            func_12FAD0(1, buf, 0xFFFFFFFF);
        }
        D_00315448.w_14 = func_12DE28(o->id_d0);
        if (D_001EFE8C != o) {
            func_0A9A88(&D_00315448);
            D_001EFE8C = o;
        }
        func_0A9AC0(&D_00315448);
    }
    func_0B8A08(D_003153A0);
    func_0ACCC8(0x20E, buf, 0.0f);
    x2 = buf[4];
    y2 = buf[6];
    func_0A9460(x2, y2, func_12DE28(0x1CA));
    if (o != 0) {
        func_0ACCC8(0x214, buf2, 0.0f);
        text = func_12D8C0(D_003154A0[o->idx_d4]->a_30, 0);
        func_0A9460(buf2[4], buf2[2], text);
    }
}
