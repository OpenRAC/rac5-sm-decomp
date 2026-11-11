/* LEVEL_15:0x0FE8B8 -- writes the huge float constant 1e30 into the two
   float slots at 0x4 and 0x8 of the caller's record. */
void func_0FE8B8(void *a0)
{
    *(float *)((char *)a0 + 0x4) = 1e30f;
    *(float *)((char *)a0 + 0x8) = 1e30f;
}
