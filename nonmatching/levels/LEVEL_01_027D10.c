/* LEVEL_01.REL:0x027D10: Ghidra body 152 bytes.
 * Pinned pure C links 116 bytes and first differs at +4.
 * Recheck the two stack-backed clamp selections and global pointer layout. No matching credit.
 */
extern char *D_001F3FAC;

void func_027D10(void)
{
    int minimum = 0;
    int maximum = 255;
    int *selected = &minimum;
    int *first = (int *)(D_001F3FAC + 0x18);
    int second_minimum;
    int second_maximum;
    int *second_selected;
    int *second;
    if (*first >= 0) {
        selected = &maximum;
        if (*first < 256)
            selected = first;
    }
    *first = *selected;

    second_minimum = 0;
    second_maximum = 255;
    second_selected = &second_minimum;
    second = (int *)(D_001F3FAC + 0x1c);
    if (*second >= 0) {
        second_selected = &second_maximum;
        if (*second < 256)
            second_selected = second;
    }
    *second = *second_selected;
}
