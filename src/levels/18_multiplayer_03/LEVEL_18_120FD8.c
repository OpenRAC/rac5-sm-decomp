/* LEVEL_18:0x120FD8 -- placement copy of LEVEL_16_121F20.c: reads a rectangle from the shared source, builds the widget record from its centre and size with the packed value 0x40602020 and sets its flags (0x840 added, two bytes cleared). */
typedef struct {
    int x0, y0, x1, y1;
    short w10, w12;
    int i14, i18, i1C, i20;
    char b24;
    char pad25[3];
    int i28, i2C, i30;
    char pad34[5];
    char b39;
    char pad3A[10];
    int i44;
    char pad48;
    char b49;
    char pad4A[2];
    int i4C;
    int pad50;
} W;

extern W D_002E2360;
extern int D_002E2218;
extern int D_001BDA00;
extern void func_09BE08(float f, int id, int *out);
extern int func_095D20(int *value);
extern int func_095D50(char *record);
extern int func_095D80(int *param_1);
extern int func_095E38(int *range);
extern void func_098AE0(W *w, short x, short y, short hw, short hh, int val);

void func_120FD8(void)
{
    int buf[4];
    short x;
    short y;
    short hw;
    short hh;
    W *w;

    D_002E2218 = 0;
    func_09BE08(0.0f, 0xB2, buf);
    w = &D_002E2360;
    x = func_095D20(buf);
    y = func_095D50((char *)buf);
    hw = func_095D80(buf);
    hh = func_095E38(buf);
    func_098AE0(w, x, y, hw, hh, 0x40602020);
    w->i20 |= 0x840;
    w->b39 = 0;
    w->b24 = 0;
    D_001BDA00 = 0;
}
