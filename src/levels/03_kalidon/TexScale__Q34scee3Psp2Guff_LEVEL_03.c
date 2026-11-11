/* LEVEL_03:0x0A0820 -- stores the pair and flags the record. */
extern float D_0020ED90;
extern char D_0020EDA0;

void TexScale__Q34scee3Psp2Guff(float a, float b)
{
    D_0020EDA0 = 1;
    D_0020ED90 = a;
    *(&D_0020ED90 + 1) = b;
}
