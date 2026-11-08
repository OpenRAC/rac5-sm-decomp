typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Entry;

extern unsigned int D_0023AB90;
extern Entry D_0023AB98[];

void func_07E4C8(unsigned int key)
{
    unsigned int count = D_0023AB90;
    if (count != 0) {
        Entry *current = D_0023AB98;
        Entry *end = current + count;
        while ((unsigned int)current < (unsigned int)end) {
            if (current->key == key)
                current->callback(current->argument);
            current++;
        }
    }
}
