typedef struct {
    unsigned char unused_0[12];
    int result;
    int value;
} Entry;

extern char D_0022A250[];
extern int func_11AD08(int amount, int zero, const void *data, int kind);

void func_09B180(Entry *entry, int value) {
    entry->value = value;
    entry->result = func_11AD08(value * 140, 0, D_0022A250, 242);
}
