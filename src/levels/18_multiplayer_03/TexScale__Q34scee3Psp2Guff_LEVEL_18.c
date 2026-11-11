/* LEVEL_18:08ED78 -- publishes the two samples and raises the ready flag. */
extern float D_001A5B60[];
extern unsigned char D_001A5B70;
void TexScale__Q34scee3Psp2Guff(float f12, float f13)
{
    D_001A5B70 = 1;
    D_001A5B60[0] = f12;
    D_001A5B60[1] = f13;
}
