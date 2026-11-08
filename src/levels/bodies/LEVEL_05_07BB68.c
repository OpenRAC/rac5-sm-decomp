typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Entry;

extern unsigned int D_00226A50;
extern Entry D_00226A58[];

void func_07BB68(unsigned int key)
{
    unsigned int count = D_00226A50;
    if (count != 0) {
        Entry *current = D_00226A58;
        Entry *end = current + count;
        while ((unsigned int)current < (unsigned int)end) {
            if (current->key == key)
                current->callback(current->argument);
            current++;
        }
    }
}
