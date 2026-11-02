typedef struct {
    unsigned char unused_0[12];
    int result;
    int value;
} Entry;

extern char D_001E3A50[];
extern int func_101FC8(int amount, int zero, const void *data, int kind);

void func_08DA00(Entry *entry, int value) {
    entry->value = value;
    entry->result = func_101FC8(value * 140, 0, D_001E3A50, 242);
}
