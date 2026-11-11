/* LEVEL_19:0x0C6AD0 -- placement copy of FRONTEND_015950.c: re-anchors a widget rectangle to the requested position, redraws it and refreshes the six slot entries. */

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

extern struct Table_015950 D_001B5780;
extern struct Panel_015950 D_0027B378;
extern int D_001B576C;
extern int D_001B5770;
extern int D_001B577C;
extern int D_001B5754;
extern int D_001B5758;

extern void func_0C6A78(int a0);
extern void func_09C688(int a0, int *a1, float f12);
extern int func_0965A0(int *r);
extern int func_0965D0(int *r);
extern int func_096600(int *r);
extern int func_0966B8(int *r);
extern void func_099360(struct Panel_015950 *a0, int a1, int a2, int a3, int a4, unsigned int a5);
extern int func_09C5D8(int a0, int a1);

void func_0C6AD0(int a0, int a1)
{
    int rect[4];
    short x;
    short y;
    short w;
    short h;
    unsigned int i;

    func_0C6A78(0);
    D_001B576C = 0;
    D_001B5770 = 0;
    D_001B577C = 0;
    D_0027B378.flag = 0;
    func_09C688(D_001B5780.target, rect, 0.0f);
    D_001B5754 = a0 - func_0965A0(rect);
    D_001B5758 = a1 - func_0965D0(rect);
    rect[0] += D_001B5754;
    rect[2] += D_001B5754;
    rect[1] += D_001B5758;
    rect[3] += D_001B5758;
    x = func_0965A0(rect);
    y = func_0965D0(rect);
    w = func_096600(rect);
    h = func_0966B8(rect);
    func_099360(&D_0027B378, x, y, w, h, 0x40602020);
    D_0027B378.flag = 0;
    for (i = 0; i < 6; i++) {
        func_09C5D8(D_001B5780.slots[i].handle, 0);
    }
}
