/* LEVEL_04:0x1BA5E0 -- placement copy of LEVEL_02_1CC5F0.c: remembers the argument, resets the shared record to the all-ones state and refreshes it. */
extern int D_00222404;
extern char D_003B3178[];
extern void func_0356E0(char *rec, unsigned int a, unsigned int b, int c);
extern void func_0356C8(char *rec);

void func_1BA5E0(int value)
{
    D_00222404 = value;
    func_0356E0(D_003B3178, 0xFFFFFFFFu, 0xFFFFFFFFu, 0);
    func_0356C8(D_003B3178);
}
