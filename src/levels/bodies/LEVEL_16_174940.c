/* LEVEL_16:0x174940 -- placement copy of LEVEL_01_1AB860.c: starts a timed state on the object, notifies a helper pair and adjusts a status byte. */

extern int D_001D04A0;
extern unsigned char D_001DFC30[];
extern char *D_001BE2EC;

extern int func_0220C8(int a0, int a1);
extern void func_06FCA8(void *o, int a1, int a2, int a3, float f12, float f13);
extern void func_073518(void *a0, void *a1, int a2, int a3, int t0, int t1, int t2, int t3,
                        float f12, float f13, float f14, float f15);

void func_174940(char *a0)
{
    char *s0;
    int s1;
    char *g;

    s0 = *(char **)(a0 + 0x58);
    s1 = func_0220C8(8, *(int *)(*(char **)s0 + 0xF8));
    *(float *)(s0 + 0x10) = 60.0f;
    *(int *)(s0 + 0x14) = 3;
    func_06FCA8(a0, 3, 0, 1, 0.1f, 0.0f);
    a0[0x45] = 8;
    *(int *)(s1 + 0x40) = *(int *)(s1 + 0x40) - 1;
    g = D_001BE2EC;
    if (g != 0) {
        func_073518(a0, g, 0, 0, 0, 0, 0, 1, ((float *)g)[5], ((float *)g)[6], ((float *)g)[7], ((float *)g)[8]);
    }
    if (D_001D04A0 == 7 && (D_001DFC30[0xD] >= 1 && D_001DFC30[0xD] <= 0x3F)) {
        D_001DFC30[0xD] = 0x80;
    } else if (D_001D04A0 == 9 && (D_001DFC30[0xD] >= 1 && D_001DFC30[0xD] <= 0x3F)) {
        D_001DFC30[0xD] = 0x80;
    }
}
