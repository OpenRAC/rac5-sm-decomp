/* LEVEL_18:0x021F28 -- placement copy of LEVEL_16_0228E0.c: for an id below 25, runs the set or clear handler
   chosen by the flag and reports success. */
extern int func_0247B0(unsigned int id);
extern void func_024838(unsigned int id);

int func_021F28(unsigned int id, int flag)
{
    if (id < 25) {
        if (flag)
            func_0247B0(id);
        else
            func_024838(id);
        return 1;
    }
    return 0;
}
