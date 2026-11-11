/* Candidate for LEVEL_03.REL:0x080A28.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Record;

extern unsigned int D_00255A10;
extern Record D_00255A18[];

int func_080A28(void *argument, void (*callback)(void *), unsigned int key)
{
    unsigned int count = D_00255A10;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_00255A18[count];
    D_00255A10 = count + 1;
    entry->argument = argument;
    entry->callback = callback;
    entry->key = key;
    return 1;
}

