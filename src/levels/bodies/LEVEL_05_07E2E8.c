/* Candidate for LEVEL_05.REL:0x07E2E8.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Record;

extern unsigned int D_00226A50;
extern Record D_00226A58[];

int func_07E2E8(void *argument, void (*callback)(void *), unsigned int key)
{
    unsigned int count = D_00226A50;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_00226A58[count];
    D_00226A50 = count + 1;
    entry->argument = argument;
    entry->callback = callback;
    entry->key = key;
    return 1;
}

