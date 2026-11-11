/* LEVEL_01:0x1C49D0 -- scans a pointer table and reports whether any non-null entry accepts the argument. */
extern int func_084B48(void *, void *, void *);

int func_1C49D0(char *context, char *argument)
{
    int found = 0;
    unsigned int index;
    void **table = *(void ***)(context + 0x54);

    for (index = 0; index < *(unsigned char *)(context + 0x45); index++) {
        void *item = table[index];
        if (item != 0)
            found = (unsigned char)func_084B48(item, argument, argument + 8) ? 1 : found;
    }
    return found;
}
