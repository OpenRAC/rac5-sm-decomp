struct Entry {
    int value;
    void (*callback)(int);
};

extern int D_001F11A0;
extern struct Entry D_001F11A8[];

void func_070D10(void)
{
    struct Entry *entry = D_001F11A8;
    struct Entry *end = D_001F11A8 + D_001F11A0;
    if (end != entry) {
        do {
            entry->callback(entry->value);
            entry++;
        } while (entry != end);
    }
}
