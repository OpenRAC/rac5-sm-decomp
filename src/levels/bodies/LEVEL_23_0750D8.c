struct Entry {
    int value;
    void (*callback)(int);
};

extern int D_0020C198;
extern struct Entry D_0020C1A0[];

void func_0750D8(void)
{
    struct Entry *entry = D_0020C1A0;
    struct Entry *end = D_0020C1A0 + D_0020C198;
    if (end != entry) {
        do {
            entry->callback(entry->value);
            entry++;
        } while (entry != end);
    }
}
