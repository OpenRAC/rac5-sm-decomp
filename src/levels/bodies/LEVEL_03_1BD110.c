/* LEVEL_03:0x1BD110 -- placement copy of LEVEL_01_1AB860.c: starts a timed state on the object, notifies a helper pair and adjusts a status byte. */

extern int D_002336F0;
extern unsigned char D_0024BDB0[];
extern char *D_00221C94;

extern int func_0244F8(int a0, int a1);
extern void func_07CB08(void *o, int a1, int a2, int a3, float f12, float f13);
extern void func_0807B0(void *a0, void *a1, int a2, int a3, int t0, int t1, int t2, int t3,
                        float f12, float f13, float f14, float f15);

void func_1BD110(char *a0)
{
    char *s0;
    int s1;
    char *g;

    s0 = *(char **)(a0 + 0x58);
    s1 = func_0244F8(8, *(int *)(*(char **)s0 + 0xF8));
    *(float *)(s0 + 0x10) = 60.0f;
    *(int *)(s0 + 0x14) = 3;
    func_07CB08(a0, 3, 0, 1, 0.1f, 0.0f);
    a0[0x45] = 8;
    *(int *)(s1 + 0x40) = *(int *)(s1 + 0x40) - 1;
    g = D_00221C94;
    if (g != 0) {
        func_0807B0(a0, g, 0, 0, 0, 0, 0, 1, ((float *)g)[5], ((float *)g)[6], ((float *)g)[7], ((float *)g)[8]);
    }
    if (D_002336F0 == 7 && (D_0024BDB0[0xD] >= 1 && D_0024BDB0[0xD] <= 0x3F)) {
        D_0024BDB0[0xD] = 0x80;
    } else if (D_002336F0 == 9 && (D_0024BDB0[0xD] >= 1 && D_0024BDB0[0xD] <= 0x3F)) {
        D_0024BDB0[0xD] = 0x80;
    }
}
