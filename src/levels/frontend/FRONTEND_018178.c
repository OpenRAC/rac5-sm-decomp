/* FRONTEND:0x018178 -- placement copy of LEVEL_01_0C8140.c: state reset callback: runs the three reset helpers, clears a status byte between them and the last one, then calls the slot setter with (1, 1). */
extern char D_00027E50;
extern void func_0211F0(void);
extern void func_020988(void);
extern void func_020750(void);
extern int func_001B40(int a0, int a1);

void func_018178(void)
{
    func_0211F0();
    func_020988();
    D_00027E50 = 0;
    func_020750();
    func_001B40(1, 1);
}
