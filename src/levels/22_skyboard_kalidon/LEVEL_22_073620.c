/* Candidate for LEVEL_22.REL:0x073620.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Record;

extern unsigned int D_00190788;
extern Record D_00190790[];

int func_073620(void *argument, void (*callback)(void *), unsigned int key)
{
    unsigned int count = D_00190788;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_00190790[count];
    D_00190788 = count + 1;
    entry->argument = argument;
    entry->callback = callback;
    entry->key = key;
    return 1;
}

