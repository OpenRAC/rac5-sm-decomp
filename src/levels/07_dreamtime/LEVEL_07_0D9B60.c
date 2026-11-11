/* LEVEL_07:0x0D9B60 -- placement copy of FRONTEND_015950.c: re-anchors a widget rectangle to the requested position, redraws it and refreshes the six slot entries. */

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

extern struct Table_015950 D_0021AA50;
extern struct Panel_015950 D_00342A78;
extern int D_0021AA3C;
extern int D_0021AA40;
extern int D_0021AA4C;
extern int D_0021AA24;
extern int D_0021AA28;

extern void func_0D9B08(int a0);
extern void func_0B0708(int a0, int *a1, float f12);
extern int func_0AA680(int *r);
extern int func_0AA6B0(int *r);
extern int func_0AA6E0(int *r);
extern int func_0AA798(int *r);
extern void func_0AD3E0(struct Panel_015950 *a0, int a1, int a2, int a3, int a4, unsigned int a5);
extern int func_0B0658(int a0, int a1);

void func_0D9B60(int a0, int a1)
{
    int rect[4];
    short x;
    short y;
    short w;
    short h;
    unsigned int i;

    func_0D9B08(0);
    D_0021AA3C = 0;
    D_0021AA40 = 0;
    D_0021AA4C = 0;
    D_00342A78.flag = 0;
    func_0B0708(D_0021AA50.target, rect, 0.0f);
    D_0021AA24 = a0 - func_0AA680(rect);
    D_0021AA28 = a1 - func_0AA6B0(rect);
    rect[0] += D_0021AA24;
    rect[2] += D_0021AA24;
    rect[1] += D_0021AA28;
    rect[3] += D_0021AA28;
    x = func_0AA680(rect);
    y = func_0AA6B0(rect);
    w = func_0AA6E0(rect);
    h = func_0AA798(rect);
    func_0AD3E0(&D_00342A78, x, y, w, h, 0x40602020);
    D_00342A78.flag = 0;
    for (i = 0; i < 6; i++) {
        func_0B0658(D_0021AA50.slots[i].handle, 0);
    }
}
