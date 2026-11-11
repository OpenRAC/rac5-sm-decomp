/* LEVEL_05.REL:0x0B9A70 -- answers the armed reading, or the idle one. */
extern unsigned char D_001EBDA4;
extern float D_001EBDAC;
extern float D_001EBDA8;

float func_0B9A70(void)
{
    if (D_001EBDA4 == 0)
        return D_001EBDA8;
    return D_001EBDAC;
}
