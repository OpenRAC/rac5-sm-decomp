/* LEVEL_20:0x0E7E98 -- placement copy of LEVEL_16_115598.c: counts the two global entries whose flags have bit 1
   set and bit 2 clear. */
typedef struct {
    char pad[0x14];
    unsigned int flags;
    char pad18[0x4];
} Entry;

extern Entry D_00202F10[2];

int func_0E7E98(void)
{
    int count = 0;
    unsigned int i;

    for (i = 0; i < 2; i++) {
        if ((D_00202F10[i].flags & 2) && !(D_00202F10[i].flags & 4))
            count++;
    }
    return count;
}
