/* LEVEL_03:0x0D78E8 -- placement copy of FRONTEND_015950.c: re-anchors a widget rectangle to the requested position, redraws it and refreshes the six slot entries. */

struct Slot_015950 {
    int handle;
    char pad4[0x14];
};

struct Table_015950 {
    int head;
    int target;
    struct Slot_015950 slots[6];
};

struct Panel_015950 {
    char pad0[0x14];
    int flag;
};

extern struct Table_015950 D_0021EDD0;
extern struct Panel_015950 D_00347FF8;
extern int D_0021EDBC;
extern int D_0021EDC0;
extern int D_0021EDCC;
extern int D_0021EDA4;
extern int D_0021EDA8;

extern void func_0D7890(int a0);
extern void func_0AE488(int a0, int *a1, float f12);
extern int func_0A8400(int *r);
extern int func_0A8430(int *r);
extern int func_0A8460(int *r);
extern int func_0A8518(int *r);
extern void func_0AB160(struct Panel_015950 *a0, int a1, int a2, int a3, int a4, unsigned int a5);
extern int func_0AE3D8(int a0, int a1);

void func_0D78E8(int a0, int a1)
{
    int rect[4];
    short x;
    short y;
    short w;
    short h;
    unsigned int i;

    func_0D7890(0);
    D_0021EDBC = 0;
    D_0021EDC0 = 0;
    D_0021EDCC = 0;
    D_00347FF8.flag = 0;
    func_0AE488(D_0021EDD0.target, rect, 0.0f);
    D_0021EDA4 = a0 - func_0A8400(rect);
    D_0021EDA8 = a1 - func_0A8430(rect);
    rect[0] += D_0021EDA4;
    rect[2] += D_0021EDA4;
    rect[1] += D_0021EDA8;
    rect[3] += D_0021EDA8;
    x = func_0A8400(rect);
    y = func_0A8430(rect);
    w = func_0A8460(rect);
    h = func_0A8518(rect);
    func_0AB160(&D_00347FF8, x, y, w, h, 0x40602020);
    D_00347FF8.flag = 0;
    for (i = 0; i < 6; i++) {
        func_0AE3D8(D_0021EDD0.slots[i].handle, 0);
    }
}
