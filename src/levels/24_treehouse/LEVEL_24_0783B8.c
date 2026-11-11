struct Entry {
    int value;
    void (*callback)(int);
};

extern int D_00206C18;
extern struct Entry D_00206C20[];

void func_0783B8(void)
{
    struct Entry *entry = D_00206C20;
    struct Entry *end = D_00206C20 + D_00206C18;
    if (end != entry) {
        do {
            entry->callback(entry->value);
            entry++;
        } while (entry != end);
    }
}
