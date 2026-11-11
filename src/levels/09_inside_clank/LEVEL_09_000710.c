/* LEVEL_09:0x000710 -- rend la i-ieme case d'une table de huit
   flottants, ou zero hors de la plage. */

extern float D_001F50B0[];

float func_000710(int i)
{
    return i < 8 ? D_001F50B0[i] : 0.0f;
}
