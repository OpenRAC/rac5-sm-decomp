typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Entry;

extern unsigned int D_00289E20;
extern Entry D_00289E28[];

void func_086438(unsigned int key)
{
    unsigned int count = D_00289E20;
    if (count != 0) {
        Entry *current = D_00289E28;
        Entry *end = current + count;
        while ((unsigned int)current < (unsigned int)end) {
            if (current->key == key)
                current->callback(current->argument);
            current++;
        }
    }
}
