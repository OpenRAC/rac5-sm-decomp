/* LEVEL_16:0x0B8E18 -- level start-up chain ending with event 0x59. */
extern char D_001AF038[];
extern void func_0A94B0(void *);
extern void func_10FA78(int);
extern int func_0AC020(void);
extern int func_112CE8(int);
extern int func_1165C8(int);
extern void func_0AAE30(int, int);

void func_0B8E18(void)
{
    func_0A94B0(D_001AF038);
    func_10FA78(1);
    func_0AAE30(func_1165C8(func_112CE8(func_0AC020())), 0x59);
}
