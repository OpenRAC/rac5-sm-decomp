/* LEVEL_20:0x0B1728 -- placement copy of FRONTEND_015950.c: re-anchors a widget rectangle to the requested position, redraws it and refreshes the six slot entries. */

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

extern struct Table_015950 D_00116CE0;
extern struct Panel_015950 D_0019EA38;
extern int D_00116CCC;
extern int D_00116CD0;
extern int D_00116CDC;
extern int D_00116CB4;
extern int D_00116CB8;

extern void func_0B16D0(int a0);
extern void func_0874F0(int a0, int *a1, float f12);
extern int func_081408(int *r);
extern int func_081438(int *r);
extern int func_081468(int *r);
extern int func_081520(int *r);
extern void func_0841C8(struct Panel_015950 *a0, int a1, int a2, int a3, int a4, unsigned int a5);
extern int func_087440(int a0, int a1);

void func_0B1728(int a0, int a1)
{
    int rect[4];
    short x;
    short y;
    short w;
    short h;
    unsigned int i;

    func_0B16D0(0);
    D_00116CCC = 0;
    D_00116CD0 = 0;
    D_00116CDC = 0;
    D_0019EA38.flag = 0;
    func_0874F0(D_00116CE0.target, rect, 0.0f);
    D_00116CB4 = a0 - func_081408(rect);
    D_00116CB8 = a1 - func_081438(rect);
    rect[0] += D_00116CB4;
    rect[2] += D_00116CB4;
    rect[1] += D_00116CB8;
    rect[3] += D_00116CB8;
    x = func_081408(rect);
    y = func_081438(rect);
    w = func_081468(rect);
    h = func_081520(rect);
    func_0841C8(&D_0019EA38, x, y, w, h, 0x40602020);
    D_0019EA38.flag = 0;
    for (i = 0; i < 6; i++) {
        func_087440(D_00116CE0.slots[i].handle, 0);
    }
}
