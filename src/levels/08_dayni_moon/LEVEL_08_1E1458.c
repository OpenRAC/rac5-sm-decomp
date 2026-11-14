/* LEVEL_08:0x1E1458 -- placement copy of LEVEL_02_1CC5F0.c: remembers the argument, resets the shared record to the all-ones state and refreshes it. */
extern int D_0025247C;
extern char D_003EA260[];
extern void func_038958(char *rec, unsigned int a, unsigned int b, int c);
extern void func_038940(char *rec);

void func_1E1458(int value)
{
    D_0025247C = value;
    func_038958(D_003EA260, 0xFFFFFFFFu, 0xFFFFFFFFu, 0);
    func_038940(D_003EA260);
}
