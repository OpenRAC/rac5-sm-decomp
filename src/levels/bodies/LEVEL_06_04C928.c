/* LEVEL_06:04C928 -- arms the object's two timers and refreshes it. */
extern void func_044DC8(void *a0);
void func_04C928(char *a0)
{
    *(float *)(a0 + 0x240) = 0.05000000447034836f;
    *(float *)(a0 + 0x26C) = *(float *)(a0 + 0xD0);
    func_044DC8(a0);
}
