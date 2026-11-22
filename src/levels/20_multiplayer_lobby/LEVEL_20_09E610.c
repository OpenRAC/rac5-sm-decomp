/* LEVEL_20:0x09E610 -- placement copy of LEVEL_01_0C4BD0.c: draws the pause panel texts: title, optional icon rows for the selected entry, the entry's cached label and the footer. */

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

extern char D_0019AC60[];
extern Entry *D_0019AD60[];
extern int D_00128F40[];
extern Panel D_0019AD08;
extern Obj *D_00111264;

extern void func_087890(float f, int a, unsigned int b);
extern int func_0874F0(int id, short *buf, float f);
extern int func_081408(short *buf);
extern int func_0E2118(int id);
extern int func_0E1BB0(int a, int b);
extern void func_083578(int x, int y, int text);
extern void func_083C88(int x, int y, int text);
extern Obj *func_093988(char *p);
extern void func_0939E0(char *p);
extern void func_0E3CB0(int slot, short *buf, unsigned int c);
extern void func_0842B0(Panel *p);
extern void func_0842E8(Panel *p);

void func_09E610(void)
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

    func_087890(0.0f, 0x38, 0xFFFFFFFF);
    func_0874F0(0x218, buf, 0.0f);
    x = func_081408(buf);
    y = buf[6];
    func_083578(x, y, func_0E2118(0x24D));
    o = func_093988(D_0019AC60);
    if (o != 0) {
        e = D_0019AD60[o->idx_d4];
        if (D_00128F40[e->a_30] != 0) {
            func_0874F0(0x213, buf, 0.0f);
            func_0E3CB0(0, buf, 0xFFFFFFFF);
        }
        if (e->b_34 != 0) {
            func_0874F0(0x217, buf, 0.0f);
            func_0E3CB0(1, buf, 0xFFFFFFFF);
        }
        D_0019AD08.w_14 = func_0E2118(o->id_d0);
        if (D_00111264 != o) {
            func_0842B0(&D_0019AD08);
            D_00111264 = o;
        }
        func_0842E8(&D_0019AD08);
    }
    func_0939E0(D_0019AC60);
    func_0874F0(0x20E, buf, 0.0f);
    x2 = buf[4];
    y2 = buf[6];
    func_083C88(x2, y2, func_0E2118(0x1CA));
    if (o != 0) {
        func_0874F0(0x214, buf2, 0.0f);
        text = func_0E1BB0(D_0019AD60[o->idx_d4]->a_30, 0);
        func_083C88(buf2[4], buf2[2], text);
    }
}
