typedef struct {
    unsigned char unused_0[12];
    int result;
    int value;
} Entry;

extern char D_001FF750[];
extern int func_105D70(int amount, int zero, const void *data, int kind);

void func_090D88(Entry *entry, int value) {
    entry->value = value;
    entry->result = func_105D70(value * 140, 0, D_001FF750, 242);
}
