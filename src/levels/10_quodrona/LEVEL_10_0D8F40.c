/* LEVEL_10:0x0D8F40 -- placement copy of FRONTEND_015950.c: re-anchors a widget rectangle to the requested position, redraws it and refreshes the six slot entries. */

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

extern struct Table_015950 D_0020F750;
extern struct Panel_015950 D_00336578;
extern int D_0020F73C;
extern int D_0020F740;
extern int D_0020F74C;
extern int D_0020F724;
extern int D_0020F728;

extern void func_0D8EE8(int a0);
extern void func_0AF820(int a0, int *a1, float f12);
extern int func_0A9798(int *r);
extern int func_0A97C8(int *r);
extern int func_0A97F8(int *r);
extern int func_0A98B0(int *r);
extern void func_0AC4F8(struct Panel_015950 *a0, int a1, int a2, int a3, int a4, unsigned int a5);
extern int func_0AF770(int a0, int a1);

void func_0D8F40(int a0, int a1)
{
    int rect[4];
    short x;
    short y;
    short w;
    short h;
    unsigned int i;

    func_0D8EE8(0);
    D_0020F73C = 0;
    D_0020F740 = 0;
    D_0020F74C = 0;
    D_00336578.flag = 0;
    func_0AF820(D_0020F750.target, rect, 0.0f);
    D_0020F724 = a0 - func_0A9798(rect);
    D_0020F728 = a1 - func_0A97C8(rect);
    rect[0] += D_0020F724;
    rect[2] += D_0020F724;
    rect[1] += D_0020F728;
    rect[3] += D_0020F728;
    x = func_0A9798(rect);
    y = func_0A97C8(rect);
    w = func_0A97F8(rect);
    h = func_0A98B0(rect);
    func_0AC4F8(&D_00336578, x, y, w, h, 0x40602020);
    D_00336578.flag = 0;
    for (i = 0; i < 6; i++) {
        func_0AF770(D_0020F750.slots[i].handle, 0);
    }
}
