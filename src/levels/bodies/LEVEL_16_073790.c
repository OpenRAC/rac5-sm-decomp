/* Candidate for LEVEL_16.REL:0x073790.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Record;

extern unsigned int D_001F1018;
extern Record D_001F1020[];

int func_073790(void *argument, void (*callback)(void *), unsigned int key)
{
    unsigned int count = D_001F1018;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_001F1020[count];
    D_001F1018 = count + 1;
    entry->argument = argument;
    entry->callback = callback;
    entry->key = key;
    return 1;
}

