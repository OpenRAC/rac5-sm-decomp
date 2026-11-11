typedef struct {
    unsigned char unused_0[12];
    int result;
    int value;
} Entry;

extern char D_00126680[];
extern int func_0CA598(int amount, int zero, const void *data, int kind);

void func_076388(Entry *entry, int value) {
    entry->value = value;
    entry->result = func_0CA598(value * 140, 0, D_00126680, 242);
}
