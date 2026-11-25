/* LEVEL_18:0x15F868 -- builds the four packed words from the setup records, then creates the marker and sets its two size fields. */
struct R160988 {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
};

extern struct R160988 D_001D66F8[];
extern int D_001BF380[];
extern char *D_001BF274;
extern int func_160988(struct R160988 *a0);
extern int func_105B48(unsigned int value);

void func_15F868(void)
{
    int i;

    for (i = 0; i < 4; i++)
        D_001BF380[i] = func_160988(&D_001D66F8[i]);
    D_001BF274 = (char *)func_105B48(0x2A283D78u);
    if (D_001BF274 != 0) {
        *(float *)(D_001BF274 + 0x18) = 15.0f;
        *(float *)(D_001BF274 + 0x1C) = 60.0f;
    }
}
