/* LEVEL_06:0x09B270 -- stores the pair and flags the record. */
extern float D_001E5610;
extern char D_001E5620;

void func_09B270(float a, float b)
{
    D_001E5620 = 1;
    D_001E5610 = a;
    *(&D_001E5610 + 1) = b;
}
