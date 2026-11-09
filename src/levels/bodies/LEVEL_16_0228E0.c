/* LEVEL_16:0x0228E0 -- for an id below 25, runs the set or clear handler
   chosen by the flag and reports success. */
extern void func_025200(unsigned int id);
extern void func_025288(unsigned int id);

int func_0228E0(unsigned int id, int flag)
{
    if (id < 25) {
        if (flag)
            func_025200(id);
        else
            func_025288(id);
        return 1;
    }
    return 0;
}
