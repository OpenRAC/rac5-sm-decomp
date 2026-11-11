/* LEVEL_15:0x0004F8 -- table lookup; the guard rejects every index of eight
   or more and answers zero there. */
extern float D_15FC30[];

float func_0004F8(int index)
{
    if (index >= 8)
        return 0.0f;
    return D_15FC30[index];
}
