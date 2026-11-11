/* LEVEL_20:0x0F4020 -- placement copy of LEVEL_16_121F20.c: reads a rectangle from the shared source, builds the widget record from its centre and size with the packed value 0x40602020 and sets its flags (0x840 added, two bytes cleared). */
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

extern W D_00205520;
extern int D_002053D8;
extern int D_0011EC20;
extern void func_0874F0(float f, int id, int *out);
extern int func_081408(int *value);
extern int func_081438(char *record);
extern int func_081468(int *param_1);
extern int func_081520(int *range);
extern void func_0841C8(W *w, short x, short y, short hw, short hh, int val);

void func_0F4020(void)
{
    int buf[4];
    short x;
    short y;
    short hw;
    short hh;
    W *w;

    D_002053D8 = 0;
    func_0874F0(0.0f, 0xB2, buf);
    w = &D_00205520;
    x = func_081408(buf);
    y = func_081438((char *)buf);
    hw = func_081468(buf);
    hh = func_081520(buf);
    func_0841C8(w, x, y, hw, hh, 0x40602020);
    w->i20 |= 0x840;
    w->b39 = 0;
    w->b24 = 0;
    D_0011EC20 = 0;
}
