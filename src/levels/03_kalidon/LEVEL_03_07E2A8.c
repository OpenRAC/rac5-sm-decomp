typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Entry;

extern unsigned int D_00255A10;
extern Entry D_00255A18[];

void func_07E2A8(unsigned int key)
{
    unsigned int count = D_00255A10;
    if (count != 0) {
        Entry *current = D_00255A18;
        Entry *end = current + count;
        while ((unsigned int)current < (unsigned int)end) {
            if (current->key == key)
                current->callback(current->argument);
            current++;
        }
    }
}
