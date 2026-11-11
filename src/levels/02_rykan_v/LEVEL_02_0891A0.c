/* LEVEL_02:0x0891A0 -- scans a 128-byte entry table for an id from a key list. */

extern char *D_0021BD50;

int func_0891A0(int *keys, int nkeys, char **out, unsigned int *idx)
{
    unsigned int i;
    unsigned int k;
    char *entry;

    for (i = *idx; i < *(unsigned int *)(D_0021BD50 + 0x48); i++) {
        entry = *(char **)(D_0021BD50 + 0x44) + (i << 7);
        if (*(int *)(entry + 0x64) & 1) {
            for (k = 0; k < nkeys; k++) {
                if (*(int *)(*(char **)(entry + 0x40) + 0x24) == keys[k]) {
                    *out = entry;
                    *idx = i;
                    return 1;
                }
            }
        }
    }
    return 0;
}
