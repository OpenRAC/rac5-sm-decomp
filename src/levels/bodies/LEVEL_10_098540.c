typedef struct {
    unsigned char unused_0[12];
    int result;
    int value;
} Entry;

extern char D_00219850[];
extern int func_10D9B8(int amount, int zero, const void *data, int kind);

void func_098540(Entry *entry, int value) {
    entry->value = value;
    entry->result = func_10D9B8(value * 140, 0, D_00219850, 242);
}
