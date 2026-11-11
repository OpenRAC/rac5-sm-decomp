/* LEVEL_20:0x0403C0 -- meme famille que LEVEL_16:0x0462A0 : ecrase le champ
   par la somme, puis par la limite si la somme est plus basse. */
void func_0403C0(void *a0, float a1)
{
    float f0 = *(float *)((char *)a0 + 0x1B8);
    float f1 = -0.6f;

    f0 = f0 + a1;
    *(float *)((char *)a0 + 0x1B8) = f0;
    if (f0 < f1) {
        *(float *)((char *)a0 + 0x1B8) = f1;
    }
}
