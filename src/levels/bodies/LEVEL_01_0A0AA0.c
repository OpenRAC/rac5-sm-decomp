/* LEVEL_01:0x0A0AA0 -- posts the two level floats and raises the global
   flag byte on its own page. */
extern float D_001F6710[];
extern unsigned char D_001F6720;

void func_0A0AA0(float f12, float f13)
{
    D_001F6720 = 1;
    D_001F6710[0] = f12;
    D_001F6710[1] = f13;
}
