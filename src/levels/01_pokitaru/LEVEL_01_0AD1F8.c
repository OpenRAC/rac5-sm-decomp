/* LEVEL_01:0x0AD1F8 -- draws a box centred on x/y from a half-size pair. */
extern void func_0AD148(void *object, short left, short top, short right, short bottom, int extra);

void func_0AD1F8(void *object, short x, short y, short width, short height, int extra){
 int hw = (unsigned short)width >> 1; int hh = (unsigned short)height >> 1; int xx = x; int yy = y;
 func_0AD148(object, xx - hw, yy - hh, hw + xx, hh + yy, extra); }
