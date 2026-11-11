/* LEVEL_20:0x0E91B8 -- placement copy of LEVEL_16_1168B8.c: calls two helpers per index for two indices and conditionally calls a third with the index. */

extern int D_00002BC0;
extern char D_000E9348[];
extern void func_000BD8(int a0);
extern void *func_000CE8(int a0);
extern void func_000CB0(int a0, int a1, int a2);

void func_0E91B8(void)
{
    unsigned int i;
    void *r;

    for (i = 0; i < 2; i++) {
        func_000BD8(i);
        r = func_000CE8(0);
        if (r == D_000E9348) {
            func_000CB0(0, (int)&D_00002BC0, i);
        }
    }
}
