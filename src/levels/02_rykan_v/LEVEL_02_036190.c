/* LEVEL_02:0x036190 -- releases two slot handles of a sub-record and clears a flag byte. */

extern void func_160E08(void *a0);

void func_036190(char *a0)
{
    char *s;
    void **slot;
    unsigned int i;

    s = *(char **)(a0 + 0x58);
    slot = (void **)(s + 4);
    for (i = 0; i < 2; i++) {
        if (*slot != 0) {
            func_160E08(*slot);
            *slot = 0;
        }
        slot++;
    }
    s[0xAF] = 0;
}
