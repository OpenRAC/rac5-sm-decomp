/* LEVEL_21:0x0B8140 -- placement copy of FRONTEND_015950.c: re-anchors a widget rectangle to the requested position, redraws it and refreshes the six slot entries. */

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

extern struct Table_015950 D_0015B3D0;
extern struct Panel_015950 D_002449B8;
extern int D_0015B3BC;
extern int D_0015B3C0;
extern int D_0015B3CC;
extern int D_0015B3A4;
extern int D_0015B3A8;

extern void func_0B80E8(int a0);
extern void func_08EFD0(int a0, int *a1, float f12);
extern int func_088F48(int *r);
extern int func_088F78(int *r);
extern int func_088FA8(int *r);
extern int func_089060(int *r);
extern void func_08BCA8(struct Panel_015950 *a0, int a1, int a2, int a3, int a4, unsigned int a5);
extern int func_08EF20(int a0, int a1);

void func_0B8140(int a0, int a1)
{
    int rect[4];
    short x;
    short y;
    short w;
    short h;
    unsigned int i;

    func_0B80E8(0);
    D_0015B3BC = 0;
    D_0015B3C0 = 0;
    D_0015B3CC = 0;
    D_002449B8.flag = 0;
    func_08EFD0(D_0015B3D0.target, rect, 0.0f);
    D_0015B3A4 = a0 - func_088F48(rect);
    D_0015B3A8 = a1 - func_088F78(rect);
    rect[0] += D_0015B3A4;
    rect[2] += D_0015B3A4;
    rect[1] += D_0015B3A8;
    rect[3] += D_0015B3A8;
    x = func_088F48(rect);
    y = func_088F78(rect);
    w = func_088FA8(rect);
    h = func_089060(rect);
    func_08BCA8(&D_002449B8, x, y, w, h, 0x40602020);
    D_002449B8.flag = 0;
    for (i = 0; i < 6; i++) {
        func_08EF20(D_0015B3D0.slots[i].handle, 0);
    }
}
