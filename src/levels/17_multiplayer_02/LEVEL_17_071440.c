struct Entry {
    int value;
    void (*callback)(int);
};

extern int D_001E24A0;
extern struct Entry D_001E24A8[];

void func_071440(void)
{
    struct Entry *entry = D_001E24A8;
    struct Entry *end = D_001E24A8 + D_001E24A0;
    if (end != entry) {
        do {
            entry->callback(entry->value);
            entry++;
        } while (entry != end);
    }
}
