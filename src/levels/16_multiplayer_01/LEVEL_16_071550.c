typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Entry;

extern unsigned int D_001F1018;
extern Entry D_001F1020[];

void func_071550(unsigned int key)
{
    unsigned int count = D_001F1018;
    if (count != 0) {
        Entry *current = D_001F1020;
        Entry *end = current + count;
        while ((unsigned int)current < (unsigned int)end) {
            if (current->key == key)
                current->callback(current->argument);
            current++;
        }
    }
}
