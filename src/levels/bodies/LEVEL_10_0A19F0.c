/* LEVEL_10:0x0A19F0 -- swaps a global word for a new value, calls a helper and returns the old value. */
struct Globals_002A5CC0 {
    char pad[0x2028];
    int value;
};
extern struct Globals_002A5CC0 D_002A5CC0;
extern void func_0A19A8(int);

int func_0A19F0(int value)
{
    int old = D_002A5CC0.value;
    D_002A5CC0.value = value;
    func_0A19A8(0);
    return old;
}
