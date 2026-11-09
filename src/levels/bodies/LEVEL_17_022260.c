/* LEVEL_17:0x022260 -- placement copy of LEVEL_16_0228E0.c: for an id below 25, runs the set or clear handler
   chosen by the flag and reports success. */
extern void func_024B80(unsigned int id);
extern void func_024C08(unsigned int id);

int func_022260(unsigned int id, int flag)
{
    if (id < 25) {
        if (flag)
            func_024B80(id);
        else
            func_024C08(id);
        return 1;
    }
    return 0;
}
