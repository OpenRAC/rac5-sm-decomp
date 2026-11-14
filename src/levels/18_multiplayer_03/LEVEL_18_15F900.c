/* LEVEL_18:0x15F900 -- when bit 0 of the state word at 0x154 is set, forwards the object and the word at offset 4 of the second argument with the constants 0x49 and 4. */
extern void func_15E308(char *o, int a, int b, int c);

void func_15F900(char *o, char *src)
{
    char *state = *(char **)(o + 0x58);

    if (*(unsigned int *)(state + 0x154) & 1) {
        func_15E308(o, *(int *)(src + 4), 0x49, 4);
    }
}
