typedef struct {
    unsigned char unused_0[12];
    int result;
    int value;
} Entry;

extern char D_0016DD50[];
extern int func_0EB508(int amount, int zero, const void *data, int kind);

void func_088D80(Entry *entry, int value) {
    entry->value = value;
    entry->result = func_0EB508(value * 44, 0, D_0016DD50, 242);
}
