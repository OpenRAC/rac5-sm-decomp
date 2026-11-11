/* Candidate for LEVEL_06.REL:0x07A828.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Record;

extern unsigned int D_00227910;
extern Record D_00227918[];

int func_07A828(void *argument, void (*callback)(void *), unsigned int key)
{
    unsigned int count = D_00227910;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_00227918[count];
    D_00227910 = count + 1;
    entry->argument = argument;
    entry->callback = callback;
    entry->key = key;
    return 1;
}

