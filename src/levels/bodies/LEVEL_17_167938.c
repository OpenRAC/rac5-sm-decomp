/* LEVEL_17:0x167938 -- placement copy of LEVEL_01_1AB860.c: starts a timed state on the object, notifies a helper pair and adjusts a status byte. */

extern int D_001C3920;
extern unsigned char D_001D0F30[];
extern char *D_001B17FC;

extern int func_021A48(int a0, int a1);
extern void func_0703D8(void *o, int a1, int a2, int a3, float f12, float f13);
extern void func_073C48(void *a0, void *a1, int a2, int a3, int t0, int t1, int t2, int t3,
                        float f12, float f13, float f14, float f15);

void func_167938(char *a0)
{
    char *s0;
    int s1;
    char *g;

    s0 = *(char **)(a0 + 0x58);
    s1 = func_021A48(8, *(int *)(*(char **)s0 + 0xF8));
    *(float *)(s0 + 0x10) = 60.0f;
    *(int *)(s0 + 0x14) = 3;
    func_0703D8(a0, 3, 0, 1, 0.1f, 0.0f);
    a0[0x45] = 8;
    *(int *)(s1 + 0x40) = *(int *)(s1 + 0x40) - 1;
    g = D_001B17FC;
    if (g != 0) {
        func_073C48(a0, g, 0, 0, 0, 0, 0, 1, ((float *)g)[5], ((float *)g)[6], ((float *)g)[7], ((float *)g)[8]);
    }
    if (D_001C3920 == 7 && (D_001D0F30[0xD] >= 1 && D_001D0F30[0xD] <= 0x3F)) {
        D_001D0F30[0xD] = 0x80;
    } else if (D_001C3920 == 9 && (D_001D0F30[0xD] >= 1 && D_001D0F30[0xD] <= 0x3F)) {
        D_001D0F30[0xD] = 0x80;
    }
}
