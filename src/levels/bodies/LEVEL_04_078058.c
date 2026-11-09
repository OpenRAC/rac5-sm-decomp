/* LEVEL_04:0x078058 -- runs a setup call, then calls a per-entry helper for each count. */

void func_07A7A0(void *a, void *b, void *c, void *d);
void func_07A8C8(void *a, void *b, void *c, int d, int e);

void func_078058(void *a0, void *a1, void *a2, void *a3)
{
    unsigned int i;

    func_07A7A0(a0, a3, a1, a2);
    i = 0;
    if (i < *(unsigned int *)((char *)a3 + 0x14)) {
        do {
            func_07A8C8(a0, a3, a1, (int)a2, i * 5);
            i++;
        } while (i < *(unsigned int *)((char *)a3 + 0x14));
    }
}
