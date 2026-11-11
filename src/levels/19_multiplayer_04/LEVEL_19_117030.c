/* LEVEL_19:0x117030 -- placement copy of LEVEL_16_1168B8.c: calls two helpers per index for two indices and conditionally calls a third with the index. */

extern int D_00002C00;
extern char D_001171C0[];
extern void func_000BF0(int a0);
extern void *func_000D28(int a0);
extern void func_000CF0(int a0, int a1, int a2);

void func_117030(void)
{
    unsigned int i;
    void *r;

    for (i = 0; i < 2; i++) {
        func_000BF0(i);
        r = func_000D28(0);
        if (r == D_001171C0) {
            func_000CF0(0, (int)&D_00002C00, i);
        }
    }
}
