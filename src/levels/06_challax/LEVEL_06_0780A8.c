typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Entry;

extern unsigned int D_00227910;
extern Entry D_00227918[];

void func_0780A8(unsigned int key)
{
    unsigned int count = D_00227910;
    if (count != 0) {
        Entry *current = D_00227918;
        Entry *end = current + count;
        while ((unsigned int)current < (unsigned int)end) {
            if (current->key == key)
                current->callback(current->argument);
            current++;
        }
    }
}
