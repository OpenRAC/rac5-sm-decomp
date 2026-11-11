struct Entry {
    int value;
    void (*callback)(int);
};

extern int D_00255528;
extern struct Entry D_00255530[];

void func_081138(void)
{
    struct Entry *entry = D_00255530;
    struct Entry *end = D_00255530 + D_00255528;
    if (end != entry) {
        do {
            entry->callback(entry->value);
            entry++;
        } while (entry != end);
    }
}
