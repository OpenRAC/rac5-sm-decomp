/* LEVEL_02:0x1AEBE8 -- chooses a follow-up action from a status word, sets a state byte. */

extern char *func_01ACB0(void);
extern unsigned int func_08B060(void *a0, unsigned int a1);
extern unsigned int func_138860(int a0);
extern void func_0BBDB8(int a0, unsigned int a1, int a2, int a3);
extern unsigned int func_08E8B8(int a0);
extern void func_08E718(int a0);
extern void func_0D0928(int a0);
extern unsigned int func_03D480(unsigned char *g);
extern unsigned char D_0024C650[];

void func_1AEBE8(unsigned char *o)
{
    unsigned char *s;
    unsigned int t;
    unsigned int v;
    unsigned int rv;

    s = *(unsigned char **)(o + 0x54);
    t = (unsigned int)func_01ACB0();
    v = func_08B060(*(void **)(s + 8), t);
    if (v != 0) {
        t = func_138860(0x208);
        func_0BBDB8(0, t, 0, 0);
        rv = func_08E8B8(2);
        if ((rv & 0x1000) != 0) {
            func_08E718(0x200);
            o[0x45] = 1;
            *(float *)(o + 0x70) = 30.0f;
            func_0D0928(0x48);
        }
    } else {
        rv = func_03D480(D_0024C650) & 0xFF;
        if (rv != 0) {
            o[0x45] = 4;
        }
    }
}
