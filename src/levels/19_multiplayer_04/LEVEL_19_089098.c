typedef struct {
    unsigned char unused_0[12];
    int result;
    int value;
} Entry;

extern char D_001C6800[];
extern int func_0F0A00(int amount, int zero, const void *data, int kind);

void func_089098(Entry *entry, int value) {
    entry->value = value;
    entry->result = func_0F0A00(value * 140, 0, D_001C6800, 242);
}
