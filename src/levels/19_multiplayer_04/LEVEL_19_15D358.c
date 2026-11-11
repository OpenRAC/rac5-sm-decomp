/* LEVEL_19:0x15D358 -- stores the lookup results for two fixed ids in two globals. */
extern int D_001BF020;
extern int D_001BF024;
extern int func_107538(unsigned int);

void func_15D358(void)
{
    D_001BF024 = func_107538(0xDB6136C6u);
    D_001BF020 = func_107538(0x92377558u);
}
