typedef struct {
    unsigned char unused_0[12];
    int result;
    int value;
} Entry;

extern char D_002255D0[];
extern int func_1127F0(int amount, int zero, const void *data, int kind);

void func_09A058(Entry *entry, int value) {
    entry->value = value;
    entry->result = func_1127F0(value * 140, 0, D_002255D0, 242);
}
