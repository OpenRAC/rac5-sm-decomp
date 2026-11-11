/* Candidate for LEVEL_19.REL:0x0738D8.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Record;

extern unsigned int D_001F1198;
extern Record D_001F11A0[];

int func_0738D8(void *argument, void (*callback)(void *), unsigned int key)
{
    unsigned int count = D_001F1198;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_001F11A0[count];
    D_001F1198 = count + 1;
    entry->argument = argument;
    entry->callback = callback;
    entry->key = key;
    return 1;
}

