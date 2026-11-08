typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Entry;

extern unsigned int D_0020C010;
extern Entry D_0020C018[];

void func_0758C8(unsigned int key)
{
    unsigned int count = D_0020C010;
    if (count != 0) {
        Entry *current = D_0020C018;
        Entry *end = current + count;
        while ((unsigned int)current < (unsigned int)end) {
            if (current->key == key)
                current->callback(current->argument);
            current++;
        }
    }
}
