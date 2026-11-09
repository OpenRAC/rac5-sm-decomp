/* LEVEL_08:0x1F7F58 -- placement copy of LEVEL_01_1C49D0.c: scans a pointer table and reports whether any non-null entry accepts the argument. */
extern int func_08CBC0(void *, void *, void *);

int func_1F7F58(char *context, char *argument)
{
    int found = 0;
    unsigned int index;
    void **table = *(void ***)(context + 0x54);

    for (index = 0; index < *(unsigned char *)(context + 0x45); index++) {
        void *item = table[index];
        if (item != 0)
            found = (unsigned char)func_08CBC0(item, argument, argument + 8) ? 1 : found;
    }
    return found;
}
