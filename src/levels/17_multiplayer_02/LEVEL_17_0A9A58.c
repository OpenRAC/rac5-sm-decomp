/* LEVEL_17.REL:0x0A9A58 -- returns the live or the held global float,
   according to the flag byte. */
extern unsigned char D_0019E0A4;
extern float D_0019E0AC;
extern float D_0019E0A8;

float func_0A9A58(void)
{
    if (D_0019E0A4 == 0) return D_0019E0A8;
    return D_0019E0AC;
}
