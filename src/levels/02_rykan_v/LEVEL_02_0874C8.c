/* Candidate for LEVEL_02.REL:0x0874C8.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Record;

extern unsigned int D_002520A0;
extern Record D_002520A8[];

int func_0874C8(void *argument, void (*callback)(void *), unsigned int key)
{
    unsigned int count = D_002520A0;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_002520A8[count];
    D_002520A0 = count + 1;
    entry->argument = argument;
    entry->callback = callback;
    entry->key = key;
    return 1;
}

