/* LEVEL_08:0x07CBD8 -- placement copy of LEVEL_04_078058.c: runs a setup call, then calls a per-entry helper for each count. */

void func_07F320(void *a, void *b, void *c, void *d);
void func_07F448(void *a, void *b, void *c, int d, int e);

void func_07CBD8(void *a0, void *a1, void *a2, void *a3)
{
    unsigned int i;

    func_07F320(a0, a3, a1, a2);
    i = 0;
    if (i < *(unsigned int *)((char *)a3 + 0x14)) {
        do {
            func_07F448(a0, a3, a1, (int)a2, i * 5);
            i++;
        } while (i < *(unsigned int *)((char *)a3 + 0x14));
    }
}
