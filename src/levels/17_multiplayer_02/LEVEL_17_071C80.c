typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Entry;

extern unsigned int D_001E2318;
extern Entry D_001E2320[];

void func_071C80(unsigned int key)
{
    unsigned int count = D_001E2318;
    if (count != 0) {
        Entry *current = D_001E2320;
        Entry *end = current + count;
        while ((unsigned int)current < (unsigned int)end) {
            if (current->key == key)
                current->callback(current->argument);
            current++;
        }
    }
}
