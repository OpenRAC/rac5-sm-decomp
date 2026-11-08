typedef void (*Callback)(void *);
extern char *D_0020F9F0;

void func_07D708(void)
{
    char *context = D_0020F9F0;
    int count = *(int *)(context + 0x48);
    char *current = *(char **)(context + 0x44);
    char *end = current + count * 0x80;
    while ((unsigned int)current < (unsigned int)end) {
        if (*(int *)(current + 0x5c) != 0) {
            char *owner = *(char **)(current + 0x40);
            if (owner != 0) {
                char *table = *(char **)(owner + 0x10);
                Callback callback = *(Callback *)(table + 0x24);
                if (callback != 0) {
                    callback(current);
                }
            }
        }
        current += 0x80;
    }
}
