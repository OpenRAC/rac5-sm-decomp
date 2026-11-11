/* LEVEL_15:0x137248 -- adds a delta to a global counter capped at 20 and passes it to a helper. */
struct G { char pad[0x1FC]; int count; };
extern struct G D_002F4F88;
extern void func_0977D8(int);

void func_137248(int delta)
{
    int next = D_002F4F88.count + delta;
    int value = 20;
    if (next <= 19)
        value = next;
    D_002F4F88.count = value;
    func_0977D8(value);
}
