typedef struct {
    unsigned char unused_0[12];
    int result;
    int value;
} Entry;

extern char D_0022A250[];
extern int func_11AD08(int amount, int zero, const void *data, int kind);

void func_09B1C8(Entry *entry, int value) {
    entry->value = value;
    entry->result = func_11AD08(value * 44, 0, D_0022A250, 242);
}
