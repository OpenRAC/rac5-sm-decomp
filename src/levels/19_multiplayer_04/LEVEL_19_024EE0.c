/* LEVEL_19:0x024EE0 -- placement copy of LEVEL_16_025338.c: registers a key in the first free slot of one of two tables unless already present. */
extern char *D_001A2C34;
extern int D_001A2C40[8];
extern char *func_021CB0(unsigned int, int);

int func_024EE0(int key, int flag)
{
    unsigned int i;
    int idx;
    int *t;
    int *u;
    int *w;
    int k4;

    if (func_021CB0(key, -1) != 0)
        return 0;
    for (i = 0; i < 8; i++) {
        t = flag ? D_001A2C40 : (int *)(D_001A2C34 + 0x864);
        if (t[i] == key)
            return 0;
    }
    idx = -1;
    for (i = 0; i < 8; i++) {
        u = flag ? D_001A2C40 : (int *)(D_001A2C34 + 0x864);
        if (u[i] == 0) {
            idx = i;
            break;
        }
    }
    if (idx < 0)
        return 0;
    w = flag ? D_001A2C40 : (int *)(D_001A2C34 + 0x864);
    k4 = idx * 4;
    *(int *)((char *)w + idx * 4) = key;
    *(int *)(D_001A2C34 + k4 + 0x884) = 0;
    return 1;
}
