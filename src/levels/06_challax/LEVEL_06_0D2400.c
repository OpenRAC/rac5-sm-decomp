/* LEVEL_06:0x0D2400 -- placement copy of FRONTEND_015950.c: re-anchors a widget rectangle to the requested position, redraws it and refreshes the six slot entries. */

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

extern struct Table_015950 D_001F5650;
extern struct Panel_015950 D_00319EF8;
extern int D_001F563C;
extern int D_001F5640;
extern int D_001F564C;
extern int D_001F5624;
extern int D_001F5628;

extern void func_0D23A8(int a0);
extern void func_0A8ED8(int a0, int *a1, float f12);
extern int func_0A2E50(int *r);
extern int func_0A2E80(int *r);
extern int func_0A2EB0(int *r);
extern int func_0A2F68(int *r);
extern void func_0A5BB0(struct Panel_015950 *a0, int a1, int a2, int a3, int a4, unsigned int a5);
extern int func_0A8E28(int a0, int a1);

void func_0D2400(int a0, int a1)
{
    int rect[4];
    short x;
    short y;
    short w;
    short h;
    unsigned int i;

    func_0D23A8(0);
    D_001F563C = 0;
    D_001F5640 = 0;
    D_001F564C = 0;
    D_00319EF8.flag = 0;
    func_0A8ED8(D_001F5650.target, rect, 0.0f);
    D_001F5624 = a0 - func_0A2E50(rect);
    D_001F5628 = a1 - func_0A2E80(rect);
    rect[0] += D_001F5624;
    rect[2] += D_001F5624;
    rect[1] += D_001F5628;
    rect[3] += D_001F5628;
    x = func_0A2E50(rect);
    y = func_0A2E80(rect);
    w = func_0A2EB0(rect);
    h = func_0A2F68(rect);
    func_0A5BB0(&D_00319EF8, x, y, w, h, 0x40602020);
    D_00319EF8.flag = 0;
    for (i = 0; i < 6; i++) {
        func_0A8E28(D_001F5650.slots[i].handle, 0);
    }
}
