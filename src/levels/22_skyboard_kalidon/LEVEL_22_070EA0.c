typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Entry;

extern unsigned int D_00190788;
extern Entry D_00190790[];

void func_070EA0(unsigned int key)
{
    unsigned int count = D_00190788;
    if (count != 0) {
        Entry *current = D_00190790;
        Entry *end = current + count;
        while ((unsigned int)current < (unsigned int)end) {
            if (current->key == key)
                current->callback(current->argument);
            current++;
        }
    }
}
