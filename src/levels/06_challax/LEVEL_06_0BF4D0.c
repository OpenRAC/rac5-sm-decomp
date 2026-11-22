/* LEVEL_06:0x0BF4D0 -- placement copy of LEVEL_01_0C4BD0.c: draws the pause panel texts: title, optional icon rows for the selected entry, the entry's cached label and the footer. */

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

extern char D_00316260[];
extern Entry *D_00316360[];
extern int D_00202000[];
extern Panel D_00316308;
extern Obj *D_001EFA0C;

extern void func_0A9278(float f, int a, unsigned int b);
extern int func_0A8ED8(int id, short *buf, float f);
extern int func_0A2E50(short *buf);
extern int func_128B80(int id);
extern int func_128618(int a, int b);
extern void func_0A4F60(int x, int y, int text);
extern void func_0A5670(int x, int y, int text);
extern Obj *func_0B4D08(char *p);
extern void func_0B4D60(char *p);
extern void func_12A828(int slot, short *buf, unsigned int c);
extern void func_0A5C98(Panel *p);
extern void func_0A5CD0(Panel *p);

void func_0BF4D0(void)
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

    func_0A9278(0.0f, 0x38, 0xFFFFFFFF);
    func_0A8ED8(0x218, buf, 0.0f);
    x = func_0A2E50(buf);
    y = buf[6];
    func_0A4F60(x, y, func_128B80(0x24D));
    o = func_0B4D08(D_00316260);
    if (o != 0) {
        e = D_00316360[o->idx_d4];
        if (D_00202000[e->a_30] != 0) {
            func_0A8ED8(0x213, buf, 0.0f);
            func_12A828(0, buf, 0xFFFFFFFF);
        }
        if (e->b_34 != 0) {
            func_0A8ED8(0x217, buf, 0.0f);
            func_12A828(1, buf, 0xFFFFFFFF);
        }
        D_00316308.w_14 = func_128B80(o->id_d0);
        if (D_001EFA0C != o) {
            func_0A5C98(&D_00316308);
            D_001EFA0C = o;
        }
        func_0A5CD0(&D_00316308);
    }
    func_0B4D60(D_00316260);
    func_0A8ED8(0x20E, buf, 0.0f);
    x2 = buf[4];
    y2 = buf[6];
    func_0A5670(x2, y2, func_128B80(0x1CA));
    if (o != 0) {
        func_0A8ED8(0x214, buf2, 0.0f);
        text = func_128618(D_00316360[o->idx_d4]->a_30, 0);
        func_0A5670(buf2[4], buf2[2], text);
    }
}
