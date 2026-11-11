/* LEVEL_01:0x132280 -- uppercases ASCII letters and high-latin bytes in a counted string. */
void func_132280(unsigned char *text, unsigned int length)
{
    unsigned int index;
    int value;
    if (length == 0)
        return;
    index = 0;
    do {
        value = *text;
        if ((unsigned int)value >= 0xe0 && value != 0xf0 && value != 0xff && value != 0xf7) {
            *text = value & ~0x20;
        } else if (value >= 0x61 && value <= 0x7a) {
            if (value == 0)
                return;
            *text = (signed char)*text & ~0x20;
        }
        index++;
        text++;
    } while (index < length);
}
