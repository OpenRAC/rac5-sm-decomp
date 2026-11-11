typedef struct {
    int **base;
    unsigned int count;
} Set;

/* The fifth argument is passed in $t0 by the MIPS ABI of this toolchain. */
int func_0122E8(Set *set, unsigned int i, int stride, int value, int flag)
{
    int off;

    if (i >= set->count)
        return 0;
    off = stride * 0x30;
    *(int *)((char *)set->base[i] + off) = value;
    ((char *)set->base[i] + off)[0xC] = (char)flag;
    return 1;
}
