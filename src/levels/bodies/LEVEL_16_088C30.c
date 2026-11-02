typedef struct {
    unsigned char unused_0[12];
    int result;
    int value;
} Entry;

extern char D_001C5600[];
extern int func_0F03B8(int amount, int zero, const void *data, int kind);

void func_088C30(Entry *entry, int value) {
    entry->value = value;
    entry->result = func_0F03B8(value * 44, 0, D_001C5600, 242);
}
