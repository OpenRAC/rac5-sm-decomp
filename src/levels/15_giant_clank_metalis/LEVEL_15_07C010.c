typedef struct {
    unsigned char unused_0[12];
    int result;
    int value;
} Entry;

extern char D_00165050[];
extern int func_0D4FE0(int amount, int zero, const void *data, int kind);

void func_07C010(Entry *entry, int value) {
    entry->value = value;
    entry->result = func_0D4FE0(value * 140, 0, D_00165050, 242);
}
