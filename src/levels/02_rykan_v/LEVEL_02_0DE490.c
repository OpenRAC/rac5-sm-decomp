/* LEVEL_02:0x0DE490 -- placement copy of FRONTEND_015950.c: re-anchors a widget rectangle to the requested position, redraws it and refreshes the six slot entries. */

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

extern struct Table_015950 D_0021B710;
extern struct Panel_015950 D_00344678;
extern int D_0021B6FC;
extern int D_0021B700;
extern int D_0021B70C;
extern int D_0021B6E4;
extern int D_0021B6E8;

extern void func_0DE438(int a0);
extern void func_0B5018(int a0, int *a1, float f12);
extern int func_0AEF90(int *r);
extern int func_0AEFC0(int *r);
extern int func_0AEFF0(int *r);
extern int func_0AF0A8(int *r);
extern void func_0B1CF0(struct Panel_015950 *a0, int a1, int a2, int a3, int a4, unsigned int a5);
extern int func_0B4F68(int a0, int a1);

void func_0DE490(int a0, int a1)
{
    int rect[4];
    short x;
    short y;
    short w;
    short h;
    unsigned int i;

    func_0DE438(0);
    D_0021B6FC = 0;
    D_0021B700 = 0;
    D_0021B70C = 0;
    D_00344678.flag = 0;
    func_0B5018(D_0021B710.target, rect, 0.0f);
    D_0021B6E4 = a0 - func_0AEF90(rect);
    D_0021B6E8 = a1 - func_0AEFC0(rect);
    rect[0] += D_0021B6E4;
    rect[2] += D_0021B6E4;
    rect[1] += D_0021B6E8;
    rect[3] += D_0021B6E8;
    x = func_0AEF90(rect);
    y = func_0AEFC0(rect);
    w = func_0AEFF0(rect);
    h = func_0AF0A8(rect);
    func_0B1CF0(&D_00344678, x, y, w, h, 0x40602020);
    D_00344678.flag = 0;
    for (i = 0; i < 6; i++) {
        func_0B4F68(D_0021B710.slots[i].handle, 0);
    }
}
