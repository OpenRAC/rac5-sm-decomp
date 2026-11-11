/* LEVEL_06:0x157500 -- calls two helpers, then calls a third helper when a sub-record byte is set, otherwise clears a byte field of the object. */
extern char D_00003008[];
extern void func_080C60(int a0);
extern void func_001088(int a0, int a1, int a2);
extern void func_076268(char *a0, int a1);

void func_157500(char *a0)
{
    unsigned char *s0;

    s0 = *(unsigned char **)(a0 + 0x54);
    func_080C60(2);
    func_001088(0, (int)D_00003008, 0);
    if (s0[0x1C] != 0) {
        func_076268(a0, 1);
    } else {
        a0[0x45] = 0;
    }
}
