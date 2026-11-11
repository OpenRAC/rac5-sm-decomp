typedef struct {
    unsigned char unused_0[12];
    int result;
    int value;
} Entry;

extern char D_002297D0[];
extern int func_10D468(int amount, int zero, const void *data, int kind);

void func_097E00(Entry *entry, int value) {
    entry->value = value;
    entry->result = func_10D468(value * 140, 0, D_002297D0, 242);
}
