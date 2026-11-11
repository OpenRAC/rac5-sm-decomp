/* LEVEL_24:0x0D1468 -- placement copy of FRONTEND_015950.c: re-anchors a widget rectangle to the requested position, redraws it and refreshes the six slot entries. */

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

extern struct Table_015950 D_001D73D0;
extern struct Panel_015950 D_002F9038;
extern int D_001D73BC;
extern int D_001D73C0;
extern int D_001D73CC;
extern int D_001D73A4;
extern int D_001D73A8;

extern void func_0D1410(int a0);
extern void func_0A7F80(int a0, int *a1, float f12);
extern int func_0A1EF8(int *r);
extern int func_0A1F28(int *r);
extern int func_0A1F58(int *r);
extern int func_0A2010(int *r);
extern void func_0A4C58(struct Panel_015950 *a0, int a1, int a2, int a3, int a4, unsigned int a5);
extern int func_0A7ED0(int a0, int a1);

void func_0D1468(int a0, int a1)
{
    int rect[4];
    short x;
    short y;
    short w;
    short h;
    unsigned int i;

    func_0D1410(0);
    D_001D73BC = 0;
    D_001D73C0 = 0;
    D_001D73CC = 0;
    D_002F9038.flag = 0;
    func_0A7F80(D_001D73D0.target, rect, 0.0f);
    D_001D73A4 = a0 - func_0A1EF8(rect);
    D_001D73A8 = a1 - func_0A1F28(rect);
    rect[0] += D_001D73A4;
    rect[2] += D_001D73A4;
    rect[1] += D_001D73A8;
    rect[3] += D_001D73A8;
    x = func_0A1EF8(rect);
    y = func_0A1F28(rect);
    w = func_0A1F58(rect);
    h = func_0A2010(rect);
    func_0A4C58(&D_002F9038, x, y, w, h, 0x40602020);
    D_002F9038.flag = 0;
    for (i = 0; i < 6; i++) {
        func_0A7ED0(D_001D73D0.slots[i].handle, 0);
    }
}
