typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Entry;

extern unsigned int D_00222310;
extern Entry D_00222318[];

void func_07AF48(unsigned int key)
{
    unsigned int count = D_00222310;
    if (count != 0) {
        Entry *current = D_00222318;
        Entry *end = current + count;
        while ((unsigned int)current < (unsigned int)end) {
            if (current->key == key)
                current->callback(current->argument);
            current++;
        }
    }
}
