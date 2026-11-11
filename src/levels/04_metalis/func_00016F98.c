/* LEVEL_04:0x16F98 -- publish a value into the active object, clear its flag, then notify. */
extern int D_00234170;
extern char *D_0020D12C;
extern void func_000282F8(int);

void func_00016F98(void) {
    int value = D_00234170;
    *(int *)(D_0020D12C + 0x1C6C) = value;
    *(char *)(D_0020D12C + 0x10513) = 0;
    func_000282F8(value);
}
