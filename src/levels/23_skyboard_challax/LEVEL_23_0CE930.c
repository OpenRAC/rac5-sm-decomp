/* LEVEL_23:0x0CE930 -- placement copy of FRONTEND_015950.c: re-anchors a widget rectangle to the requested position, redraws it and refreshes the six slot entries. */

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

extern struct Table_015950 D_001D9B50;
extern struct Panel_015950 D_002FE5B8;
extern int D_001D9B3C;
extern int D_001D9B40;
extern int D_001D9B4C;
extern int D_001D9B24;
extern int D_001D9B28;

extern void func_0CE8D8(int a0);
extern void func_0A5478(int a0, int *a1, float f12);
extern int func_09F3F0(int *r);
extern int func_09F420(int *r);
extern int func_09F450(int *r);
extern int func_09F508(int *r);
extern void func_0A2150(struct Panel_015950 *a0, int a1, int a2, int a3, int a4, unsigned int a5);
extern int func_0A53C8(int a0, int a1);

void func_0CE930(int a0, int a1)
{
    int rect[4];
    short x;
    short y;
    short w;
    short h;
    unsigned int i;

    func_0CE8D8(0);
    D_001D9B3C = 0;
    D_001D9B40 = 0;
    D_001D9B4C = 0;
    D_002FE5B8.flag = 0;
    func_0A5478(D_001D9B50.target, rect, 0.0f);
    D_001D9B24 = a0 - func_09F3F0(rect);
    D_001D9B28 = a1 - func_09F420(rect);
    rect[0] += D_001D9B24;
    rect[2] += D_001D9B24;
    rect[1] += D_001D9B28;
    rect[3] += D_001D9B28;
    x = func_09F3F0(rect);
    y = func_09F420(rect);
    w = func_09F450(rect);
    h = func_09F508(rect);
    func_0A2150(&D_002FE5B8, x, y, w, h, 0x40602020);
    D_002FE5B8.flag = 0;
    for (i = 0; i < 6; i++) {
        func_0A53C8(D_001D9B50.slots[i].handle, 0);
    }
}
