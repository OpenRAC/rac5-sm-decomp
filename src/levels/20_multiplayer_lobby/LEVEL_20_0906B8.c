/* LEVEL_20:0x0906B8 -- marks the slot with the given value, arming the fade
   flag the first time. */
extern int D_10CF40[];
extern float D_10D0F8[];

void func_0906B8(int index, int value)
{
    if (D_10CF40[index] != 0 && D_10CF40[index] != value) {
        if (D_10D0F8[index] == 0.0f)
            D_10D0F8[index] = 1.0f;
    }
    D_10CF40[index] = value;
}
