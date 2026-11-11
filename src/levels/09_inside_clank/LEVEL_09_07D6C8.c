/* Candidate for LEVEL_09.REL:0x07D6C8.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Record;

extern unsigned int D_00222310;
extern Record D_00222318[];

int func_07D6C8(void *argument, void (*callback)(void *), unsigned int key)
{
    unsigned int count = D_00222310;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_00222318[count];
    D_00222310 = count + 1;
    entry->argument = argument;
    entry->callback = callback;
    entry->key = key;
    return 1;
}

