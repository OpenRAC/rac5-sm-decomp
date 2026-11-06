struct Entry {
    int value;
    void (*callback)(int);
};

extern int D_00289FA8;
extern struct Entry D_00289FB0[];

void func_085C48(void)
{
    struct Entry *entry = D_00289FB0;
    struct Entry *end = D_00289FB0 + D_00289FA8;
    if (end != entry) {
        do {
            entry->callback(entry->value);
            entry++;
        } while (entry != end);
    }
}
