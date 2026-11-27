/* LEVEL_15:0x134D58 -- resets a global state block, runs one helper on its slot, then fills a 14-entry float table with i/14. */
typedef struct G {
    char pad_000[0x15C];
    unsigned char b15C;
    char pad_15D[3];
    int i160;
    float table[14];
    char pad_19C[0x1F4 - 0x19C];
    int i1F4;
    int i1F8;
    int i1FC;
    int i200;
} G;

extern G D_002F4F88;

extern void func_0977D8(void *value);
extern void func_121548(char *p);

void func_134D58(void)
{
    char *s0;
    char *s1;
    int i;

    D_002F4F88.b15C = 1;
    D_002F4F88.i160 = -1;
    s0 = (char *)&D_002F4F88 + 0x19C;
    s1 = s0;
    D_002F4F88.i1F8 = 0;
    D_002F4F88.i1FC = 0;
    D_002F4F88.i1F4 = 0;
    func_0977D8(0);
    do {
        func_121548(s0);
        s0 += 0x50;
    } while (s0 == s1);
    for (i = 0; i < 14; i++)
        D_002F4F88.table[i] = (float)i / 14.0f;
    D_002F4F88.i200 = 0;
}
