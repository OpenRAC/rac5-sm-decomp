/* LEVEL_23:0x0BB970 -- placement copy of LEVEL_01_0C4BD0.c: draws the pause panel texts: title, optional icon rows for the selected entry, the entry's cached label and the footer. */

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

extern char D_002FA920[];
extern Entry *D_002FAA20[];
extern int D_001E6300[];
extern Panel D_002FA9C8;
extern Obj *D_001D3F0C;

extern void func_0A5818(float f, int a, unsigned int b);
extern int func_0A5478(int id, short *buf, float f);
extern int func_09F3F0(short *buf);
extern int func_123C28(int id);
extern int func_1236C0(int a, int b);
extern void func_0A1500(int x, int y, int text);
extern void func_0A1C10(int x, int y, int text);
extern Obj *func_0B11A0(char *p);
extern void func_0B11F8(char *p);
extern void func_1258D0(int slot, short *buf, unsigned int c);
extern void func_0A2238(Panel *p);
extern void func_0A2270(Panel *p);

void func_0BB970(void)
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

    func_0A5818(0.0f, 0x38, 0xFFFFFFFF);
    func_0A5478(0x218, buf, 0.0f);
    x = func_09F3F0(buf);
    y = buf[6];
    func_0A1500(x, y, func_123C28(0x24D));
    o = func_0B11A0(D_002FA920);
    if (o != 0) {
        e = D_002FAA20[o->idx_d4];
        if (D_001E6300[e->a_30] != 0) {
            func_0A5478(0x213, buf, 0.0f);
            func_1258D0(0, buf, 0xFFFFFFFF);
        }
        if (e->b_34 != 0) {
            func_0A5478(0x217, buf, 0.0f);
            func_1258D0(1, buf, 0xFFFFFFFF);
        }
        D_002FA9C8.w_14 = func_123C28(o->id_d0);
        if (D_001D3F0C != o) {
            func_0A2238(&D_002FA9C8);
            D_001D3F0C = o;
        }
        func_0A2270(&D_002FA9C8);
    }
    func_0B11F8(D_002FA920);
    func_0A5478(0x20E, buf, 0.0f);
    x2 = buf[4];
    y2 = buf[6];
    func_0A1C10(x2, y2, func_123C28(0x1CA));
    if (o != 0) {
        func_0A5478(0x214, buf2, 0.0f);
        text = func_1236C0(D_002FAA20[o->idx_d4]->a_30, 0);
        func_0A1C10(buf2[4], buf2[2], text);
    }
}
