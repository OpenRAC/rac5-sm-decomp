/* LEVEL_03:0x0ACF78 -- placement copy of LEVEL_01_0AD1F8.c: draws a box centred on x/y from a half-size pair. */
extern void func_0ACEC8(void *object, short left, short top, short right, short bottom, int extra);

void func_0ACF78(void *object, short x, short y, short width, short height, int extra){
 int hw = (unsigned short)width >> 1; int hh = (unsigned short)height >> 1; int xx = x; int yy = y;
 func_0ACEC8(object, xx - hw, yy - hh, hw + xx, hh + yy, extra); }
