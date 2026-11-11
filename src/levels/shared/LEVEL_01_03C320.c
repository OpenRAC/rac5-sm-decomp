/* LEVEL_01:0x03C320 -- tells whether the two floats of the record match and
   the third one is zero. */
int func_03C320(void *a0)
{
    return !(*(float *)((char *)a0 + 0x96C) == *(float *)((char *)a0 + 0x970)
             && *(float *)((char *)a0 + 0xB28) == 0.0f);
}
