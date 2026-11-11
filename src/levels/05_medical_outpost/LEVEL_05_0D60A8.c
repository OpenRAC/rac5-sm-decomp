/* LEVEL_05:0x0D60A8 -- placement copy of FRONTEND_015950.c: re-anchors a widget rectangle to the requested position, redraws it and refreshes the six slot entries. */

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

extern struct Table_015950 D_001F5AD0;
extern struct Panel_015950 D_00319038;
extern int D_001F5ABC;
extern int D_001F5AC0;
extern int D_001F5ACC;
extern int D_001F5AA4;
extern int D_001F5AA8;

extern void func_0D6050(int a0);
extern void func_0ACCC8(int a0, int *a1, float f12);
extern int func_0A6C40(int *r);
extern int func_0A6C70(int *r);
extern int func_0A6CA0(int *r);
extern int func_0A6D58(int *r);
extern void func_0A99A0(struct Panel_015950 *a0, int a1, int a2, int a3, int a4, unsigned int a5);
extern int func_0ACC18(int a0, int a1);

void func_0D60A8(int a0, int a1)
{
    int rect[4];
    short x;
    short y;
    short w;
    short h;
    unsigned int i;

    func_0D6050(0);
    D_001F5ABC = 0;
    D_001F5AC0 = 0;
    D_001F5ACC = 0;
    D_00319038.flag = 0;
    func_0ACCC8(D_001F5AD0.target, rect, 0.0f);
    D_001F5AA4 = a0 - func_0A6C40(rect);
    D_001F5AA8 = a1 - func_0A6C70(rect);
    rect[0] += D_001F5AA4;
    rect[2] += D_001F5AA4;
    rect[1] += D_001F5AA8;
    rect[3] += D_001F5AA8;
    x = func_0A6C40(rect);
    y = func_0A6C70(rect);
    w = func_0A6CA0(rect);
    h = func_0A6D58(rect);
    func_0A99A0(&D_00319038, x, y, w, h, 0x40602020);
    D_00319038.flag = 0;
    for (i = 0; i < 6; i++) {
        func_0ACC18(D_001F5AD0.slots[i].handle, 0);
    }
}
