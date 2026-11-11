/* LEVEL_22:0x131218 -- reads a flag byte from a child table selected by the low byte of the slot. */
int func_131218(char *object, unsigned int slot)
{
    unsigned char *child = *(unsigned char **)(object + 0x58);
    unsigned int index = slot & 0xFFu;
    if (child != 0 && index < 4) {
        goto body;
    }
    return 0;
body:
    return (child + index)[0x90] != 0;
}
