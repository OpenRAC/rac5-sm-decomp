typedef struct {
    void *argument;
    void (*callback)(void *);
    unsigned int key;
} Entry;

extern unsigned int D_001F1198;
extern Entry D_001F11A0[];

void func_071698(unsigned int key)
{
    unsigned int count = D_001F1198;
    if (count != 0) {
        Entry *current = D_001F11A0;
        Entry *end = current + count;
        while ((unsigned int)current < (unsigned int)end) {
            if (current->key == key)
                current->callback(current->argument);
            current++;
        }
    }
}
