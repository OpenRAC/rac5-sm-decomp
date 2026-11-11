/* Candidate for LEVEL_23.REL:0x077FF8.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Record;

extern unsigned int D_0020C010;
extern Record D_0020C018[];

int func_077FF8(void *argument, void (*callback)(void *), unsigned int key)
{
    unsigned int count = D_0020C010;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_0020C018[count];
    D_0020C010 = count + 1;
    entry->argument = argument;
    entry->callback = callback;
    entry->key = key;
    return 1;
}

