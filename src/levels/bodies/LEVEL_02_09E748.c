typedef struct {
    unsigned char unused_0[12];
    int result;
    int value;
} Entry;

extern char D_00225850[];
extern int func_115AE8(int amount, int zero, const void *data, int kind);

void func_09E748(Entry *entry, int value) {
    entry->value = value;
    entry->result = func_115AE8(value * 140, 0, D_00225850, 242);
}
