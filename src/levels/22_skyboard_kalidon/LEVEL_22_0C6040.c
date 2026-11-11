/* LEVEL_22:0x0C6040 -- placement copy of FRONTEND_015950.c: re-anchors a widget rectangle to the requested position, redraws it and refreshes the six slot entries. */

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

extern struct Table_015950 D_00165AD0;
extern struct Panel_015950 D_00282D38;
extern int D_00165ABC;
extern int D_00165AC0;
extern int D_00165ACC;
extern int D_00165AA4;
extern int D_00165AA8;

extern void func_0C5FE8(int a0);
extern void func_09CD18(int a0, int *a1, float f12);
extern int func_096C90(int *r);
extern int func_096CC0(int *r);
extern int func_096CF0(int *r);
extern int func_096DA8(int *r);
extern void func_0999F0(struct Panel_015950 *a0, int a1, int a2, int a3, int a4, unsigned int a5);
extern int func_09CC68(int a0, int a1);

void func_0C6040(int a0, int a1)
{
    int rect[4];
    short x;
    short y;
    short w;
    short h;
    unsigned int i;

    func_0C5FE8(0);
    D_00165ABC = 0;
    D_00165AC0 = 0;
    D_00165ACC = 0;
    D_00282D38.flag = 0;
    func_09CD18(D_00165AD0.target, rect, 0.0f);
    D_00165AA4 = a0 - func_096C90(rect);
    D_00165AA8 = a1 - func_096CC0(rect);
    rect[0] += D_00165AA4;
    rect[2] += D_00165AA4;
    rect[1] += D_00165AA8;
    rect[3] += D_00165AA8;
    x = func_096C90(rect);
    y = func_096CC0(rect);
    w = func_096CF0(rect);
    h = func_096DA8(rect);
    func_0999F0(&D_00282D38, x, y, w, h, 0x40602020);
    D_00282D38.flag = 0;
    for (i = 0; i < 6; i++) {
        func_09CC68(D_00165AD0.slots[i].handle, 0);
    }
}
