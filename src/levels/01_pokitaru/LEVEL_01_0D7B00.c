/* LEVEL_01:0x0D7B00 -- placement copy of FRONTEND_015950.c: re-anchors a widget rectangle to the requested position, redraws it and refreshes the six slot entries. */

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

extern struct Table_015950 D_00206750;
extern struct Panel_015950 D_0032D178;
extern int D_0020673C;
extern int D_00206740;
extern int D_0020674C;
extern int D_00206724;
extern int D_00206728;

extern void func_0D7AA8(int a0);
extern void func_0AE708(int a0, int *a1, float f12);
extern int func_0A8680(int *r);
extern int func_0A86B0(int *r);
extern int func_0A86E0(int *r);
extern int func_0A8798(int *r);
extern void func_0AB3E0(struct Panel_015950 *a0, int a1, int a2, int a3, int a4, unsigned int a5);
extern int func_0AE658(int a0, int a1);

void func_0D7B00(int a0, int a1)
{
    int rect[4];
    short x;
    short y;
    short w;
    short h;
    unsigned int i;

    func_0D7AA8(0);
    D_0020673C = 0;
    D_00206740 = 0;
    D_0020674C = 0;
    D_0032D178.flag = 0;
    func_0AE708(D_00206750.target, rect, 0.0f);
    D_00206724 = a0 - func_0A8680(rect);
    D_00206728 = a1 - func_0A86B0(rect);
    rect[0] += D_00206724;
    rect[2] += D_00206724;
    rect[1] += D_00206728;
    rect[3] += D_00206728;
    x = func_0A8680(rect);
    y = func_0A86B0(rect);
    w = func_0A86E0(rect);
    h = func_0A8798(rect);
    func_0AB3E0(&D_0032D178, x, y, w, h, 0x40602020);
    D_0032D178.flag = 0;
    for (i = 0; i < 6; i++) {
        func_0AE658(D_00206750.slots[i].handle, 0);
    }
}
