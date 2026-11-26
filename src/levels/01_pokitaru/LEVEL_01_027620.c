/* LEVEL_01:0x027620 -- sets bit 0 of a per-index flag byte when the index is in range and the id list accepts it. */
extern unsigned char *D_001F3FAC;
extern int func_0275A0(unsigned int id);

int func_027620(unsigned int index)
{
    unsigned char *p;

    if (index >= 100)
        return 0;
    if (func_0275A0(index)) {
        p = D_001F3FAC + 0x1b60;
        p[index] |= 1;
        return 1;
    }
    return 0;
}
