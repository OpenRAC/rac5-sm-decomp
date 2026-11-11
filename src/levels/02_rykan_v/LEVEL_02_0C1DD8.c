/* LEVEL_02.REL:0x0C1DD8 -- returns the live or the held global float,
   according to the flag byte. */
extern unsigned char D_002119E4;
extern float D_002119EC;
extern float D_002119E8;

float func_0C1DD8(void)
{
    if (D_002119E4 == 0) return D_002119E8;
    return D_002119EC;
}
