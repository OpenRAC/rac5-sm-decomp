/* LEVEL_01:0x0D8580 -- resets a few fields of the argument object: the flag
   at 0x4C becomes one, the float at 0x20 becomes the integer at 0x18 plus
   0x20, the word at 0x04 is copied from 0x50 and the word at 0x24 is
   cleared; the call is answered with one. */
int func_0D8580(void *a0)
{
    *(int *)((char *)a0 + 0x4C) = 1;
    *(float *)((char *)a0 + 0x20) = (float)(*(int *)((char *)a0 + 0x18) + 0x20);
    *(int *)((char *)a0 + 0x04) = *(int *)((char *)a0 + 0x50);
    *(int *)((char *)a0 + 0x24) = 0;
    return 1;
}
