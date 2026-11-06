struct Entry {
    int value;
    void (*callback)(int);
};

extern int D_00227A98;
extern struct Entry D_00227AA0[];

void func_0778B8(void)
{
    struct Entry *entry = D_00227AA0;
    struct Entry *end = D_00227AA0 + D_00227A98;
    if (end != entry) {
        do {
            entry->callback(entry->value);
            entry++;
        } while (entry != end);
    }
}
