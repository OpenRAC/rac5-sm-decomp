/* FRONTEND:0x015950 -- re-anchors a widget rectangle to the requested position, redraws it and refreshes the six slot entries. */

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

extern struct Table_015950 D_00030388;
extern struct Panel_015950 D_00196FF8;
extern int D_00030374;
extern int D_00030378;
extern int D_00030384;
extern int D_0003035C;
extern int D_00030360;

extern void func_0158F8(int a0);
extern void func_010018(int a0, int *a1, float f12);
extern int func_00B5E0(int *r);
extern int func_00B610(int *r);
extern int func_00B640(int *r);
extern int func_00B658(int *r);
extern void func_00DC30(struct Panel_015950 *a0, int a1, int a2, int a3, int a4, unsigned int a5);
extern int func_00FF68(int a0, int a1);

void func_015950(int a0, int a1)
{
    int rect[4];
    short x;
    short y;
    short w;
    short h;
    unsigned int i;

    func_0158F8(0);
    D_00030374 = 0;
    D_00030378 = 0;
    D_00030384 = 0;
    D_00196FF8.flag = 0;
    func_010018(D_00030388.target, rect, 0.0f);
    D_0003035C = a0 - func_00B5E0(rect);
    D_00030360 = a1 - func_00B610(rect);
    rect[0] += D_0003035C;
    rect[2] += D_0003035C;
    rect[1] += D_00030360;
    rect[3] += D_00030360;
    x = func_00B5E0(rect);
    y = func_00B610(rect);
    w = func_00B640(rect);
    h = func_00B658(rect);
    func_00DC30(&D_00196FF8, x, y, w, h, 0x40602020);
    D_00196FF8.flag = 0;
    for (i = 0; i < 6; i++) {
        func_00FF68(D_00030388.slots[i].handle, 0);
    }
}
