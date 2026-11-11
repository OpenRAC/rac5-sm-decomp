/* LEVEL_09:0x09DE28 -- posts the two level floats and raises the global
   flag byte on its own page. */
extern float D_001E0510[];
extern unsigned char D_001E0520;

void func_09DE28(float f12, float f13)
{
    D_001E0520 = 1;
    D_001E0510[2] = f12;
    D_001E0510[3] = f13;
}
