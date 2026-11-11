struct Entry {
    int value;
    void (*callback)(int);
};

extern int D_0023AD18;
extern struct Entry D_0023AD20[];

void func_07DCD8(void)
{
    struct Entry *entry = D_0023AD20;
    struct Entry *end = D_0023AD20 + D_0023AD18;
    if (end != entry) {
        do {
            entry->callback(entry->value);
            entry++;
        } while (entry != end);
    }
}
