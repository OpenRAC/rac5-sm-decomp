struct Entry {
    int value;
    void (*callback)(int);
};

extern int D_001F1520;
extern struct Entry D_001F1528[];

void func_0703C0(void)
{
    struct Entry *entry = D_001F1528;
    struct Entry *end = D_001F1528 + D_001F1520;
    if (end != entry) {
        do {
            entry->callback(entry->value);
            entry++;
        } while (entry != end);
    }
}
