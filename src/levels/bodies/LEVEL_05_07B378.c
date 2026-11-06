struct Entry {
    int value;
    void (*callback)(int);
};

extern int D_00226BD8;
extern struct Entry D_00226BE0[];

void func_07B378(void)
{
    struct Entry *entry = D_00226BE0;
    struct Entry *end = D_00226BE0 + D_00226BD8;
    if (end != entry) {
        do {
            entry->callback(entry->value);
            entry++;
        } while (entry != end);
    }
}
