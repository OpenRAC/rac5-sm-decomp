/* LEVEL_15:0x0978F8 -- stores the caller's float into the indexed slot of the
   level's float table. */
extern float D_151478[];

void func_0978F8(int index, float value)
{
    D_151478[index] = value;
}
