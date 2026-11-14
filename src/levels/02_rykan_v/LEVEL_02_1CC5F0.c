/* LEVEL_02:0x1CC5F0 -- remembers the argument, resets the shared record to the all-ones state and refreshes it. */
extern int D_0021DD64;
extern char D_003B01E0[];
extern void func_038AE0(char *rec, unsigned int a, unsigned int b, int c);
extern void func_038AC8(char *rec);

void func_1CC5F0(int value)
{
    D_0021DD64 = value;
    func_038AE0(D_003B01E0, 0xFFFFFFFFu, 0xFFFFFFFFu, 0);
    func_038AC8(D_003B01E0);
}
