/* Candidate for LEVEL_01.REL:0x080C48.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Record;

extern unsigned int D_0023AB90;
extern Record D_0023AB98[];

int func_080C48(void *argument, void (*callback)(void *), unsigned int key)
{
    unsigned int count = D_0023AB90;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_0023AB98[count];
    D_0023AB90 = count + 1;
    entry->argument = argument;
    entry->callback = callback;
    entry->key = key;
    return 1;
}

