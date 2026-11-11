/* LEVEL_17:0x0B8358 -- placement copy of LEVEL_16_0B8E18.c: level start-up chain ending with event 0x59. */
extern char D_001A2638[];
extern void func_0A89F0(void *);
extern void func_10EFF0(int);
extern int func_0AB560(void);
extern int func_112478(int);
extern int func_115D28(int);
extern void func_0AA370(int, int);

void func_0B8358(void)
{
    func_0A89F0(D_001A2638);
    func_10EFF0(1);
    func_0AA370(func_115D28(func_112478(func_0AB560())), 0x59);
}
