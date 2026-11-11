/* LEVEL_07:050858 -- reloads the object: stamps 0.05 at 0x240, keeps the old
   0xD0 in 0x26C and runs func_048C70. */
void func_048C70(int a0);

void func_050858(int a0)
{
    float t = *(float *)(a0 + 0xD0);

    *(float *)(a0 + 0x240) = 0.050000004f;
    *(float *)(a0 + 0x26C) = t;
    func_048C70(a0);
}
