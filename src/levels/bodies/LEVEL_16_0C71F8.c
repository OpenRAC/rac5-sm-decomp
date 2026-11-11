/* LEVEL_16:0x0C71F8 -- placement copy of FRONTEND_015950.c: re-anchors a widget rectangle to the requested position, redraws it and refreshes the six slot entries. */

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

extern struct Table_015950 D_001B4600;
extern struct Panel_015950 D_0027B1F8;
extern int D_001B45EC;
extern int D_001B45F0;
extern int D_001B45FC;
extern int D_001B45D4;
extern int D_001B45D8;

extern void func_0C71A0(int a0);
extern void func_09CDF8(int a0, int *a1, float f12);
extern int func_096D10(int *r);
extern int func_096D40(int *r);
extern int func_096D70(int *r);
extern int func_096E28(int *r);
extern void func_099AD0(struct Panel_015950 *a0, int a1, int a2, int a3, int a4, unsigned int a5);
extern int func_09CD48(int a0, int a1);

void func_0C71F8(int a0, int a1)
{
    int rect[4];
    short x;
    short y;
    short w;
    short h;
    unsigned int i;

    func_0C71A0(0);
    D_001B45EC = 0;
    D_001B45F0 = 0;
    D_001B45FC = 0;
    D_0027B1F8.flag = 0;
    func_09CDF8(D_001B4600.target, rect, 0.0f);
    D_001B45D4 = a0 - func_096D10(rect);
    D_001B45D8 = a1 - func_096D40(rect);
    rect[0] += D_001B45D4;
    rect[2] += D_001B45D4;
    rect[1] += D_001B45D8;
    rect[3] += D_001B45D8;
    x = func_096D10(rect);
    y = func_096D40(rect);
    w = func_096D70(rect);
    h = func_096E28(rect);
    func_099AD0(&D_0027B1F8, x, y, w, h, 0x40602020);
    D_0027B1F8.flag = 0;
    for (i = 0; i < 6; i++) {
        func_09CD48(D_001B4600.slots[i].handle, 0);
    }
}
