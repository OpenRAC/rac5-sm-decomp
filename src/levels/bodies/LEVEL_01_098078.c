typedef struct {
    unsigned char unused_0[12];
    int result;
    int value;
} Entry;

extern char D_002108D0[];
extern int func_10F7A0(int amount, int zero, const void *data, int kind);

void func_098078(Entry *entry, int value) {
    entry->value = value;
    entry->result = func_10F7A0(value * 140, 0, D_002108D0, 242);
}
