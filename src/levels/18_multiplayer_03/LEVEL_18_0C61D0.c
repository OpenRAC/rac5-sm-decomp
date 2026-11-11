/* LEVEL_18:0x0C61D0 -- placement copy of FRONTEND_015950.c: re-anchors a widget rectangle to the requested position, redraws it and refreshes the six slot entries. */

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

extern struct Table_015950 D_001B5A80;
extern struct Panel_015950 D_0027B578;
extern int D_001B5A6C;
extern int D_001B5A70;
extern int D_001B5A7C;
extern int D_001B5A54;
extern int D_001B5A58;

extern void func_0C6178(int a0);
extern void func_09BE08(int a0, int *a1, float f12);
extern int func_095D20(int *r);
extern int func_095D50(int *r);
extern int func_095D80(int *r);
extern int func_095E38(int *r);
extern void func_098AE0(struct Panel_015950 *a0, int a1, int a2, int a3, int a4, unsigned int a5);
extern int func_09BD58(int a0, int a1);

void func_0C61D0(int a0, int a1)
{
    int rect[4];
    short x;
    short y;
    short w;
    short h;
    unsigned int i;

    func_0C6178(0);
    D_001B5A6C = 0;
    D_001B5A70 = 0;
    D_001B5A7C = 0;
    D_0027B578.flag = 0;
    func_09BE08(D_001B5A80.target, rect, 0.0f);
    D_001B5A54 = a0 - func_095D20(rect);
    D_001B5A58 = a1 - func_095D50(rect);
    rect[0] += D_001B5A54;
    rect[2] += D_001B5A54;
    rect[1] += D_001B5A58;
    rect[3] += D_001B5A58;
    x = func_095D20(rect);
    y = func_095D50(rect);
    w = func_095D80(rect);
    h = func_095E38(rect);
    func_098AE0(&D_0027B578, x, y, w, h, 0x40602020);
    D_0027B578.flag = 0;
    for (i = 0; i < 6; i++) {
        func_09BD58(D_001B5A80.slots[i].handle, 0);
    }
}
