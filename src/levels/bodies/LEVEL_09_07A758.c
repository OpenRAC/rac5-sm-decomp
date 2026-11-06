struct Entry {
    int value;
    void (*callback)(int);
};

extern int D_00222498;
extern struct Entry D_002224A0[];

void func_07A758(void)
{
    struct Entry *entry = D_002224A0;
    struct Entry *end = D_002224A0 + D_00222498;
    if (end != entry) {
        do {
            entry->callback(entry->value);
            entry++;
        } while (entry != end);
    }
}
