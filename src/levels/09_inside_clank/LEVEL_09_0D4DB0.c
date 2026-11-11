/* LEVEL_09:0x0D4DB0 -- placement copy of FRONTEND_015950.c: re-anchors a widget rectangle to the requested position, redraws it and refreshes the six slot entries. */

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

extern struct Table_015950 D_001F0550;
extern struct Panel_015950 D_003148F8;
extern int D_001F053C;
extern int D_001F0540;
extern int D_001F054C;
extern int D_001F0524;
extern int D_001F0528;

extern void func_0D4D58(int a0);
extern void func_0AB9B8(int a0, int *a1, float f12);
extern int func_0A5930(int *r);
extern int func_0A5960(int *r);
extern int func_0A5990(int *r);
extern int func_0A5A48(int *r);
extern void func_0A8690(struct Panel_015950 *a0, int a1, int a2, int a3, int a4, unsigned int a5);
extern int func_0AB908(int a0, int a1);

void func_0D4DB0(int a0, int a1)
{
    int rect[4];
    short x;
    short y;
    short w;
    short h;
    unsigned int i;

    func_0D4D58(0);
    D_001F053C = 0;
    D_001F0540 = 0;
    D_001F054C = 0;
    D_003148F8.flag = 0;
    func_0AB9B8(D_001F0550.target, rect, 0.0f);
    D_001F0524 = a0 - func_0A5930(rect);
    D_001F0528 = a1 - func_0A5960(rect);
    rect[0] += D_001F0524;
    rect[2] += D_001F0524;
    rect[1] += D_001F0528;
    rect[3] += D_001F0528;
    x = func_0A5930(rect);
    y = func_0A5960(rect);
    w = func_0A5990(rect);
    h = func_0A5A48(rect);
    func_0A8690(&D_003148F8, x, y, w, h, 0x40602020);
    D_003148F8.flag = 0;
    for (i = 0; i < 6; i++) {
        func_0AB908(D_001F0550.slots[i].handle, 0);
    }
}
