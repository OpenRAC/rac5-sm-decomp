/* LEVEL_18:0x114340 -- placement copy of LEVEL_16_115598.c: counts the two global entries whose flags have bit 1
   set and bit 2 clear. */
typedef struct {
    char pad[0x14];
    unsigned int flags;
    char pad18[0x4];
} Entry;

extern Entry D_002DFD38[2];

int func_114340(void)
{
    int count = 0;
    unsigned int i;

    for (i = 0; i < 2; i++) {
        if ((D_002DFD38[i].flags & 2) && !(D_002DFD38[i].flags & 4))
            count++;
    }
    return count;
}
