typedef struct {
    unsigned char unused_0[12];
    int result;
    int value;
} Entry;

extern char D_001FF7D0[];
extern int func_10BBE0(int amount, int zero, const void *data, int kind);

void func_095720(Entry *entry, int value) {
    entry->value = value;
    entry->result = func_10BBE0(value * 44, 0, D_001FF7D0, 242);
}
