/* LEVEL_17:0x121948 -- placement copy of LEVEL_16_121F20.c: reads a rectangle from the shared source, builds the widget record from its centre and size with the packed value 0x40602020 and sets its flags (0x840 added, two bytes cleared). */
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

extern W D_002D32E0;
extern int D_002D3198;
extern int D_001AFB78;
extern void func_09C2F0(float f, int id, int *out);
extern int func_096208(int *value);
extern int func_096238(char *record);
extern int func_096268(int *param_1);
extern int func_096320(int *range);
extern void func_098FC8(W *w, short x, short y, short hw, short hh, int val);

void func_121948(void)
{
    int buf[4];
    short x;
    short y;
    short hw;
    short hh;
    W *w;

    D_002D3198 = 0;
    func_09C2F0(0.0f, 0xB2, buf);
    w = &D_002D32E0;
    x = func_096208(buf);
    y = func_096238((char *)buf);
    hw = func_096268(buf);
    hh = func_096320(buf);
    func_098FC8(w, x, y, hw, hh, 0x40602020);
    w->i20 |= 0x840;
    w->b39 = 0;
    w->b24 = 0;
    D_001AFB78 = 0;
}
