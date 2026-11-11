/* LEVEL_01:0x186500 -- writes two bytes into the caller's record and copies
   a small constant into the float field of a pointed record. */
void func_186500(void *a0)
{
    void *a1 = *(void **)((char *)a0 + 0x58);
    *(char *)((char *)a0 + 0x46) = 1;
    *(char *)((char *)a0 + 0x45) = 0x0B;
    *(float *)((char *)a1 + 0x264) = 0.06666667f;
}
