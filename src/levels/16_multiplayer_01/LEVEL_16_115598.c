/* LEVEL_16:0x115598 -- counts the two global entries whose flags have bit 1
   set and bit 2 clear. */
typedef struct {
    char pad[0x14];
    unsigned int flags;
    char pad18[0x4];
} Entry;

extern Entry D_002DF9B8[2];

int func_115598(void)
{
    int count = 0;
    unsigned int i;

    for (i = 0; i < 2; i++) {
        if ((D_002DF9B8[i].flags & 2) && !(D_002DF9B8[i].flags & 4))
            count++;
    }
    return count;
}
