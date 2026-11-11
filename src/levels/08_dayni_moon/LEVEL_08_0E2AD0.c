/* LEVEL_08:0x0E2AD0 -- placement copy of FRONTEND_015950.c: re-anchors a widget rectangle to the requested position, redraws it and refreshes the six slot entries. */

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

extern struct Table_015950 D_0024F610;
extern struct Panel_015950 D_0037C3F8;
extern int D_0024F5FC;
extern int D_0024F600;
extern int D_0024F60C;
extern int D_0024F5E4;
extern int D_0024F5E8;

extern void func_0E2A78(int a0);
extern void func_0B9040(int a0, int *a1, float f12);
extern int func_0B2F78(int *r);
extern int func_0B2FA8(int *r);
extern int func_0B2FD8(int *r);
extern int func_0B3090(int *r);
extern void func_0B5D18(struct Panel_015950 *a0, int a1, int a2, int a3, int a4, unsigned int a5);
extern int func_0B8F90(int a0, int a1);

void func_0E2AD0(int a0, int a1)
{
    int rect[4];
    short x;
    short y;
    short w;
    short h;
    unsigned int i;

    func_0E2A78(0);
    D_0024F5FC = 0;
    D_0024F600 = 0;
    D_0024F60C = 0;
    D_0037C3F8.flag = 0;
    func_0B9040(D_0024F610.target, rect, 0.0f);
    D_0024F5E4 = a0 - func_0B2F78(rect);
    D_0024F5E8 = a1 - func_0B2FA8(rect);
    rect[0] += D_0024F5E4;
    rect[2] += D_0024F5E4;
    rect[1] += D_0024F5E8;
    rect[3] += D_0024F5E8;
    x = func_0B2F78(rect);
    y = func_0B2FA8(rect);
    w = func_0B2FD8(rect);
    h = func_0B3090(rect);
    func_0B5D18(&D_0037C3F8, x, y, w, h, 0x40602020);
    D_0037C3F8.flag = 0;
    for (i = 0; i < 6; i++) {
        func_0B8F90(D_0024F610.slots[i].handle, 0);
    }
}
