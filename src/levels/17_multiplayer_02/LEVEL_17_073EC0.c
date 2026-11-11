/* Candidate for LEVEL_17.REL:0x073EC0.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Record;

extern unsigned int D_001E2318;
extern Record D_001E2320[];

int func_073EC0(void *argument, void (*callback)(void *), unsigned int key)
{
    unsigned int count = D_001E2318;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_001E2320[count];
    D_001E2318 = count + 1;
    entry->argument = argument;
    entry->callback = callback;
    entry->key = key;
    return 1;
}

