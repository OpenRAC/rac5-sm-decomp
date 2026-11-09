/* LEVEL_20:0x01F5E0 -- placement copy of LEVEL_16_0228E0.c: for an id below 25, runs the set or clear handler
   chosen by the flag and reports success. */
extern void func_021D78(unsigned int id);
extern void func_021E00(unsigned int id);

int func_01F5E0(unsigned int id, int flag)
{
    if (id < 25) {
        if (flag)
            func_021D78(id);
        else
            func_021E00(id);
        return 1;
    }
    return 0;
}
