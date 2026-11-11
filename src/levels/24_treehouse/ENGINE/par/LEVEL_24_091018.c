typedef struct {
    unsigned char unused_0[12];
    int result;
    int value;
} Entry;

extern char D_001E1650[];
extern int func_1067A0(int amount, int zero, const void *data, int kind);

void func_091018(Entry *entry, int value) {
    entry->value = value;
    entry->result = func_1067A0(value * 44, 0, D_001E1650, 242);
}
