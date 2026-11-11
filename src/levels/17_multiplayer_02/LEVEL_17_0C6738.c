/* LEVEL_17:0x0C6738 -- placement copy of FRONTEND_015950.c: re-anchors a widget rectangle to the requested position, redraws it and refreshes the six slot entries. */

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

extern struct Table_015950 D_001A7C00;
extern struct Panel_015950 D_0026C4F8;
extern int D_001A7BEC;
extern int D_001A7BF0;
extern int D_001A7BFC;
extern int D_001A7BD4;
extern int D_001A7BD8;

extern void func_0C66E0(int a0);
extern void func_09C2F0(int a0, int *a1, float f12);
extern int func_096208(int *r);
extern int func_096238(int *r);
extern int func_096268(int *r);
extern int func_096320(int *r);
extern void func_098FC8(struct Panel_015950 *a0, int a1, int a2, int a3, int a4, unsigned int a5);
extern int func_09C240(int a0, int a1);

void func_0C6738(int a0, int a1)
{
    int rect[4];
    short x;
    short y;
    short w;
    short h;
    unsigned int i;

    func_0C66E0(0);
    D_001A7BEC = 0;
    D_001A7BF0 = 0;
    D_001A7BFC = 0;
    D_0026C4F8.flag = 0;
    func_09C2F0(D_001A7C00.target, rect, 0.0f);
    D_001A7BD4 = a0 - func_096208(rect);
    D_001A7BD8 = a1 - func_096238(rect);
    rect[0] += D_001A7BD4;
    rect[2] += D_001A7BD4;
    rect[1] += D_001A7BD8;
    rect[3] += D_001A7BD8;
    x = func_096208(rect);
    y = func_096238(rect);
    w = func_096268(rect);
    h = func_096320(rect);
    func_098FC8(&D_0026C4F8, x, y, w, h, 0x40602020);
    D_0026C4F8.flag = 0;
    for (i = 0; i < 6; i++) {
        func_09C240(D_001A7C00.slots[i].handle, 0);
    }
}
