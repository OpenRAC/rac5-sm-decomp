struct Entry {
    int value;
    void (*callback)(int);
};

extern int D_00250618;
extern struct Entry D_00250620[];

void func_07FE40(void)
{
    struct Entry *entry = D_00250620;
    struct Entry *end = D_00250620 + D_00250618;
    if (end != entry) {
        do {
            entry->callback(entry->value);
            entry++;
        } while (entry != end);
    }
}
