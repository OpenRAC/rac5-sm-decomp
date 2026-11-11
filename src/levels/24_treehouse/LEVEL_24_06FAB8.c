/* LEVEL_24:0x06FAB8 -- placement copy of LEVEL_04_078058.c: runs a setup call, then calls a per-entry helper for each count. */

void func_072200(void *a, void *b, void *c, void *d);
void func_072328(void *a, void *b, void *c, int d, int e);

void func_06FAB8(void *a0, void *a1, void *a2, void *a3)
{
    unsigned int i;

    func_072200(a0, a3, a1, a2);
    i = 0;
    if (i < *(unsigned int *)((char *)a3 + 0x14)) {
        do {
            func_072328(a0, a3, a1, (int)a2, i * 5);
            i++;
        } while (i < *(unsigned int *)((char *)a3 + 0x14));
    }
}
