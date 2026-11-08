typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Entry;

extern unsigned int D_00144888;
extern Entry D_00144890[];

void func_060540(unsigned int key)
{
    unsigned int count = D_00144888;
    if (count != 0) {
        Entry *current = D_00144890;
        Entry *end = current + count;
        while ((unsigned int)current < (unsigned int)end) {
            if (current->key == key)
                current->callback(current->argument);
            current++;
        }
    }
}
