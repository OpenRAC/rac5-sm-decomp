struct Entry {
    int value;
    void (*callback)(int);
};

extern int D_00255B98;
extern struct Entry D_00255BA0[];

void func_07DAB8(void)
{
    struct Entry *entry = D_00255BA0;
    struct Entry *end = D_00255BA0 + D_00255B98;
    if (end != entry) {
        do {
            entry->callback(entry->value);
            entry++;
        } while (entry != end);
    }
}
