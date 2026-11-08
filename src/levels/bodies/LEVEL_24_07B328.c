/* Candidate for LEVEL_24.REL:0x07B328.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Record;

extern unsigned int D_00206A90;
extern Record D_00206A98[];

int func_07B328(void *argument, void (*callback)(void *), unsigned int key)
{
    unsigned int count = D_00206A90;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_00206A98[count];
    D_00206A90 = count + 1;
    entry->argument = argument;
    entry->callback = callback;
    entry->key = key;
    return 1;
}

