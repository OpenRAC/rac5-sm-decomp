/* LEVEL_01:0x186528 -- writes -1/6 into the float field at 0x264 of the
   object reached through the caller's pointer at 0x58. */
void func_186528(void *a0)
{
    void *v0 = *(void **)((char *)a0 + 0x58);
    *(float *)((char *)v0 + 0x264) = -0.16666667f;
}
