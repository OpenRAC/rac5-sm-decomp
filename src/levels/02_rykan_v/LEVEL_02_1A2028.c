/* LEVEL_02:1A2028 -- reports whether the block's first value has fallen below
   the object's threshold at +0x70. */
int func_1A2028(char *a0)
{
    return *(float *)(*(char **)(a0 + 0x54)) <= *(float *)(a0 + 0x70);
}
