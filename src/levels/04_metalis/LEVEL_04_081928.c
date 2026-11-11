typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Entry;

extern unsigned int D_002553A0;
extern Entry D_002553A8[];

void func_081928(unsigned int key)
{
    unsigned int count = D_002553A0;
    if (count != 0) {
        Entry *current = D_002553A8;
        Entry *end = current + count;
        while ((unsigned int)current < (unsigned int)end) {
            if (current->key == key)
                current->callback(current->argument);
            current++;
        }
    }
}
