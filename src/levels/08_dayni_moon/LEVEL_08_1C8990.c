/* LEVEL_08:0x1C8990 -- builds three hash keys from the configuration words, resolves them and a fixed key, and stores the results in globals. */
struct Cfg1C8990 {
    unsigned int w_00;
    char pad_04[4];
    unsigned int w_08;
    char pad_0C[0x50];
    unsigned int w_5C;
};

extern struct Cfg1C8990 D_002E7040;
extern unsigned int D_0025203C;
extern unsigned int D_00252040;
extern unsigned int D_00252044;
extern unsigned int D_00252048;
extern unsigned int func_0EE198(unsigned int a);
extern unsigned int func_13B5A0(unsigned int a);

void func_1C8990(void)
{
    D_0025203C = func_0EE198((D_002E7040.w_5C << 16) | 0xA8007059u);
    D_00252040 = func_0EE198((D_002E7040.w_00 << 16) | 0xB00070D9u);
    D_00252044 = func_0EE198((D_002E7040.w_08 << 16) | 0xA00070D9u);
    D_00252048 = func_13B5A0(0x1F060C1Eu);
}
