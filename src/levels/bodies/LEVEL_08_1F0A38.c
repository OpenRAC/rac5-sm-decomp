/* LEVEL_08:0x1F0A38 -- placement copy of LEVEL_04_1C78B8.c: for six words in the object's list, calls a helper with each nonzero word and a data address, then clears that word. */
extern void func_078490(int a0, char *a1);
extern char D_00252680[];

void func_1F0A38(char *a0)
{
    int *s0;
    unsigned int i;
    int v;

    i = 0;
    s0 = (int *)(*(char **)(a0 + 0x58) + 0x44);
    do {
        v = *s0;
        i = i + 1;
        if (v != 0) {
            func_078490(v, D_00252680);
            *s0 = 0;
        }
        s0 = s0 + 1;
    } while (i < 6);
}
