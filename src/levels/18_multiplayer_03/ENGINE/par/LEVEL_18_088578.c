typedef struct {
    unsigned char unused_0[12];
    int result;
    int value;
} Entry;

extern char D_001C6B80[];
extern int func_0EEBF0(int amount, int zero, const void *data, int kind);

void func_088578(Entry *entry, int value) {
    entry->value = value;
    entry->result = func_0EEBF0(value * 44, 0, D_001C6B80, 242);
}
