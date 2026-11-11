typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Entry;

extern unsigned int D_00250490;
extern Entry D_00250498[];

void func_080630(unsigned int key)
{
    unsigned int count = D_00250490;
    if (count != 0) {
        Entry *current = D_00250498;
        Entry *end = current + count;
        while ((unsigned int)current < (unsigned int)end) {
            if (current->key == key)
                current->callback(current->argument);
            current++;
        }
    }
}
