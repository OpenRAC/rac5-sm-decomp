/* LEVEL_03:0x04BEF0 -- returns 1 when the short at 0x100 equals 0x4C and the
   float at 0xD94 equals 1.0f, 0 otherwise. */
int func_04BEF0(void *a0)
{
    int r = 0;
    if (*(short *)((char *)a0 + 0x100) == 0x4C) {
        if (*(float *)((char *)a0 + 0xD94) == 1.0f) {
            r = 1;
        }
    }
    return r;
}
