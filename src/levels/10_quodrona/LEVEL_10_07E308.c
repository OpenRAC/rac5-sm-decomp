struct Entry {
    int value;
    void (*callback)(int);
};

extern int D_00244118;
extern struct Entry D_00244120[];

void func_07E308(void)
{
    struct Entry *entry = D_00244120;
    struct Entry *end = D_00244120 + D_00244118;
    if (end != entry) {
        do {
            entry->callback(entry->value);
            entry++;
        } while (entry != end);
    }
}
