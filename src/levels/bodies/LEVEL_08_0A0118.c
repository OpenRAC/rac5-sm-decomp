typedef struct {
    unsigned char unused_0[12];
    int result;
    int value;
} Entry;

extern char D_0025A550[];
extern int func_11FF40(int amount, int zero, const void *data, int kind);

void func_0A0118(Entry *entry, int value) {
    entry->value = value;
    entry->result = func_11FF40(value * 140, 0, D_0025A550, 242);
}
