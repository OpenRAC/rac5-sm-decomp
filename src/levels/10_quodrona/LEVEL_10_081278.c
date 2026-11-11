/* Candidate for LEVEL_10.REL:0x081278.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Record;

extern unsigned int D_00243F90;
extern Record D_00243F98[];

int func_081278(void *argument, void (*callback)(void *), unsigned int key)
{
    unsigned int count = D_00243F90;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_00243F98[count];
    D_00243F90 = count + 1;
    entry->argument = argument;
    entry->callback = callback;
    entry->key = key;
    return 1;
}

