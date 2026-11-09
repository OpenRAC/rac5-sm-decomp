/* LEVEL_19:0x022520 -- placement copy of LEVEL_16_0228E0.c: for an id below 25, runs the set or clear handler
   chosen by the flag and reports success. */
extern void func_024DA8(unsigned int id);
extern void func_024E30(unsigned int id);

int func_022520(unsigned int id, int flag)
{
    if (id < 25) {
        if (flag)
            func_024DA8(id);
        else
            func_024E30(id);
        return 1;
    }
    return 0;
}
