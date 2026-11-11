/* LEVEL_01.REL:0x07CA90 -- float picked by a flag bit in the header word. */

float func_07CA90(void *a0)
{
    unsigned int flag = (*(unsigned int *)((char *)a0 + 0x64) >> 8) & 1;
    char *base = *(char **)((char *)a0 + 0x48);
    char *p = base + flag * 40;
    return *(float *)(p + 0x64);
}
