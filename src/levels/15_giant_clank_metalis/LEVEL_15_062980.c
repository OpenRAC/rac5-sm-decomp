struct Entry {
    int value;
    void (*callback)(int);
};

extern int D_00182D80;
extern struct Entry D_00182D88[];

void func_062980(void)
{
    struct Entry *entry = D_00182D88;
    struct Entry *end = D_00182D88 + D_00182D80;
    if (end != entry) {
        do {
            entry->callback(entry->value);
            entry++;
        } while (entry != end);
    }
}
