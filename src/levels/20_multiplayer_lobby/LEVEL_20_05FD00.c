struct Entry {
    int value;
    void (*callback)(int);
};

extern int D_00144A10;
extern struct Entry D_00144A18[];

void func_05FD00(void)
{
    struct Entry *entry = D_00144A18;
    struct Entry *end = D_00144A18 + D_00144A10;
    if (end != entry) {
        do {
            entry->callback(entry->value);
            entry++;
        } while (entry != end);
    }
}
