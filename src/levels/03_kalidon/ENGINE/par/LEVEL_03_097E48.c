typedef struct {
    unsigned char unused_0[12];
    int result;
    int value;
} Entry;

extern char D_002297D0[];
extern int func_10D468(int amount, int zero, const void *data, int kind);

void func_097E48(Entry *entry, int value) {
    entry->value = value;
    entry->result = func_10D468(value * 44, 0, D_002297D0, 242);
}
