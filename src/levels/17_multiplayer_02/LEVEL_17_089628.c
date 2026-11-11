typedef struct {
    unsigned char unused_0[12];
    int result;
    int value;
} Entry;

extern char D_001B8A80[];
extern int func_0EF9C8(int amount, int zero, const void *data, int kind);

void func_089628(Entry *entry, int value) {
    entry->value = value;
    entry->result = func_0EF9C8(value * 140, 0, D_001B8A80, 242);
}
