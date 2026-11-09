/* LEVEL_01:0x0A60C8 -- stores a packed word split across fields and clears a flag byte. */
typedef struct { unsigned int a0; unsigned char b4; unsigned char b5; unsigned char p[2]; unsigned int a8; unsigned int aC; unsigned int a10; } S;
void func_0A60C8(S *o, unsigned int packed, int bv, unsigned int alpha)
{
 unsigned int h = packed >> 24;
 o->b5 = bv;
 o->a10 = alpha & 0xFF;
 o->aC = packed & 0xFFFFFF;
 o->a8 = h;
 o->b4 = 0;
 o->a0 = h;
}
