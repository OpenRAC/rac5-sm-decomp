/* LEVEL_17:0x14DE68 -- fetches a distance from one of two helpers, and when it is small enough, runs a follow-up. */

extern char D_0014F0C0[];

int func_111FF8(void *a, float *b, void *c);
void *func_112100(void *a, float *b, int c);
void func_14DF08(void *a, void *b);

int func_14DE68(char *a0)
{
    float tmp[2];
    float f;
    void *v;

    if (((unsigned char *)a0)[0x45] != 3) {
        v = (void *)func_111FF8(a0 + 0x30, tmp, D_0014F0C0);
        if (v == 0) {
            return 0;
        }
        f = tmp[0];
    } else {
        v = func_112100(a0 + 0x30, &tmp[1], *(int *)(*(char **)(a0 + 0x58) + 0x3C));
        if (v == 0) {
            return 0;
        }
        f = tmp[1];
    }
    if (!(f < 2.56000018119812f)) {
        return 0;
    }
    func_14DF08(a0, v);
    return 1;
}
