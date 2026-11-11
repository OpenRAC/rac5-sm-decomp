/* LEVEL_04:0x0DD3C0 -- placement copy of FRONTEND_015950.c: re-anchors a widget rectangle to the requested position, redraws it and refreshes the six slot entries. */

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

extern struct Table_015950 D_0021FC10;
extern struct Panel_015950 D_00347978;
extern int D_0021FBFC;
extern int D_0021FC00;
extern int D_0021FC0C;
extern int D_0021FBE4;
extern int D_0021FBE8;

extern void func_0DD368(int a0);
extern void func_0B3958(int a0, int *a1, float f12);
extern int func_0AD890(int *r);
extern int func_0AD8C0(int *r);
extern int func_0AD8F0(int *r);
extern int func_0AD9A8(int *r);
extern void func_0B0630(struct Panel_015950 *a0, int a1, int a2, int a3, int a4, unsigned int a5);
extern int func_0B38A8(int a0, int a1);

void func_0DD3C0(int a0, int a1)
{
    int rect[4];
    short x;
    short y;
    short w;
    short h;
    unsigned int i;

    func_0DD368(0);
    D_0021FBFC = 0;
    D_0021FC00 = 0;
    D_0021FC0C = 0;
    D_00347978.flag = 0;
    func_0B3958(D_0021FC10.target, rect, 0.0f);
    D_0021FBE4 = a0 - func_0AD890(rect);
    D_0021FBE8 = a1 - func_0AD8C0(rect);
    rect[0] += D_0021FBE4;
    rect[2] += D_0021FBE4;
    rect[1] += D_0021FBE8;
    rect[3] += D_0021FBE8;
    x = func_0AD890(rect);
    y = func_0AD8C0(rect);
    w = func_0AD8F0(rect);
    h = func_0AD9A8(rect);
    func_0B0630(&D_00347978, x, y, w, h, 0x40602020);
    D_00347978.flag = 0;
    for (i = 0; i < 6; i++) {
        func_0B38A8(D_0021FC10.slots[i].handle, 0);
    }
}
