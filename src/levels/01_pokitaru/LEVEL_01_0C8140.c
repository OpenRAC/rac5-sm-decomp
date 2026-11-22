/* LEVEL_01:0x0C8140 -- state reset callback: runs the three reset helpers, clears a status byte between them and the last one, then calls the slot setter with (1, 1). */
extern char D_001EF41C;
extern void func_133850(void);
extern void func_132FB8(void);
extern int func_132D90(void);
extern int func_01A8A8(int a0, int a1);

void func_0C8140(void)
{
    func_133850();
    func_132FB8();
    D_001EF41C = 0;
    func_132D90();
    func_01A8A8(1, 1);
}
