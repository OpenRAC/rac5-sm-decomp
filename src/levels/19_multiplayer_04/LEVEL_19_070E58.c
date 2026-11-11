struct Entry {
    int value;
    void (*callback)(int);
};

extern int D_001F1320;
extern struct Entry D_001F1328[];

void func_070E58(void)
{
    struct Entry *entry = D_001F1328;
    struct Entry *end = D_001F1328 + D_001F1320;
    if (end != entry) {
        do {
            entry->callback(entry->value);
            entry++;
        } while (entry != end);
    }
}
