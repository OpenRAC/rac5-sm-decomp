typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Entry;

extern unsigned int D_00243F90;
extern Entry D_00243F98[];

void func_07EAF8(unsigned int key)
{
    unsigned int count = D_00243F90;
    if (count != 0) {
        Entry *current = D_00243F98;
        Entry *end = current + count;
        while ((unsigned int)current < (unsigned int)end) {
            if (current->key == key)
                current->callback(current->argument);
            current++;
        }
    }
}
