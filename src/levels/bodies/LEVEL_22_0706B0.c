struct Entry {
    int value;
    void (*callback)(int);
};

extern int D_00190910;
extern struct Entry D_00190918[];

void func_0706B0(void)
{
    struct Entry *entry = D_00190918;
    struct Entry *end = D_00190918 + D_00190910;
    if (end != entry) {
        do {
            entry->callback(entry->value);
            entry++;
        } while (entry != end);
    }
}
