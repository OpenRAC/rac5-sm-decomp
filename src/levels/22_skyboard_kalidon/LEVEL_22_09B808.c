/* LEVEL_22:0x09B808 -- placement copy of LEVEL_01_0AD1F8.c: draws a box centred on x/y from a half-size pair. */
extern void func_09B758(void *object, short left, short top, short right, short bottom, int extra);

void func_09B808(void *object, short x, short y, short width, short height, int extra){
 int hw = (unsigned short)width >> 1; int hh = (unsigned short)height >> 1; int xx = x; int yy = y;
 func_09B758(object, xx - hw, yy - hh, hw + xx, hh + yy, extra); }
