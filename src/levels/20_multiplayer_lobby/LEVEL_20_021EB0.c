/* LEVEL_20:0x021EB0 -- placement copy of LEVEL_16_025338.c: registers a key in the first free slot of one of two tables unless already present. */
extern char *D_00104194;
extern int D_001041A0[8];
extern char *func_01ED70(unsigned int, int);

int func_021EB0(int key, int flag)
{
    unsigned int i;
    int idx;
    int *t;
    int *u;
    int *w;
    int k4;

    if (func_01ED70(key, -1) != 0)
        return 0;
    for (i = 0; i < 8; i++) {
        t = flag ? D_001041A0 : (int *)(D_00104194 + 0x864);
        if (t[i] == key)
            return 0;
    }
    idx = -1;
    for (i = 0; i < 8; i++) {
        u = flag ? D_001041A0 : (int *)(D_00104194 + 0x864);
        if (u[i] == 0) {
            idx = i;
            break;
        }
    }
    if (idx < 0)
        return 0;
    w = flag ? D_001041A0 : (int *)(D_00104194 + 0x864);
    k4 = idx * 4;
    *(int *)((char *)w + idx * 4) = key;
    *(int *)(D_00104194 + k4 + 0x884) = 0;
    return 1;
}
