/* LEVEL_19:0x0B86F0 -- placement copy of LEVEL_16_0B8E18.c: level start-up chain ending with event 0x59. */
extern char D_001B01B8[];
extern void func_0A8D88(void *);
extern void func_110118(int);
extern int func_0AB8F8(void);
extern int func_113490(int);
extern int func_116D40(int);
extern void func_0AA708(int, int);

void func_0B86F0(void)
{
    func_0A8D88(D_001B01B8);
    func_110118(1);
    func_0AA708(func_116D40(func_113490(func_0AB8F8())), 0x59);
}
