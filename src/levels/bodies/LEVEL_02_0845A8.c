struct Entry {
    int value;
    void (*callback)(int);
};

extern int D_00252228;
extern struct Entry D_00252230[];

void func_0845A8(void)
{
    struct Entry *entry = D_00252230;
    struct Entry *end = D_00252230 + D_00252228;
    if (end != entry) {
        do {
            entry->callback(entry->value);
            entry++;
        } while (entry != end);
    }
}
