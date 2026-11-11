typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Entry;

extern unsigned int D_00206A90;
extern Entry D_00206A98[];

void func_078BA8(unsigned int key)
{
    unsigned int count = D_00206A90;
    if (count != 0) {
        Entry *current = D_00206A98;
        Entry *end = current + count;
        while ((unsigned int)current < (unsigned int)end) {
            if (current->key == key)
                current->callback(current->argument);
            current++;
        }
    }
}
