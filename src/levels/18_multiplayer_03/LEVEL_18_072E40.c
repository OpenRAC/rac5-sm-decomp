/* Candidate for LEVEL_18.REL:0x072E40.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Record;

extern unsigned int D_001F1398;
extern Record D_001F13A0[];

int func_072E40(void *argument, void (*callback)(void *), unsigned int key)
{
    unsigned int count = D_001F1398;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_001F13A0[count];
    D_001F1398 = count + 1;
    entry->argument = argument;
    entry->callback = callback;
    entry->key = key;
    return 1;
}

