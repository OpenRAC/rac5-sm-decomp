typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Entry;

extern unsigned int D_00182BF8;
extern Entry D_00182C00[];

void func_063170(unsigned int key)
{
    unsigned int count = D_00182BF8;
    if (count != 0) {
        Entry *current = D_00182C00;
        Entry *end = current + count;
        while ((unsigned int)current < (unsigned int)end) {
            if (current->key == key)
                current->callback(current->argument);
            current++;
        }
    }
}
