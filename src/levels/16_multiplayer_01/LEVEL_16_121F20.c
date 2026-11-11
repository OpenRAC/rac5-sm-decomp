/* LEVEL_16:0x121F20 -- reads a rectangle from the shared source, builds the widget record from its centre and size with the packed value 0x40602020 and sets its flags (0x840 added, two bytes cleared). */
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

extern W D_002E1FE0;
extern int D_002E1E98;
extern int D_001BC580;
extern void func_09CDF8(float f, int id, int *out);
extern int func_096D10(int *value);
extern int func_096D40(char *record);
extern int func_096D70(int *param_1);
extern int func_096E28(int *range);
extern void func_099AD0(W *w, short x, short y, short hw, short hh, int val);

void func_121F20(void)
{
    int buf[4];
    short x;
    short y;
    short hw;
    short hh;
    W *w;

    D_002E1E98 = 0;
    func_09CDF8(0.0f, 0xB2, buf);
    w = &D_002E1FE0;
    x = func_096D10(buf);
    y = func_096D40((char *)buf);
    hw = func_096D70(buf);
    hh = func_096E28(buf);
    func_099AD0(w, x, y, hw, hh, 0x40602020);
    w->i20 |= 0x840;
    w->b39 = 0;
    w->b24 = 0;
    D_001BC580 = 0;
}
