/* LEVEL_01:0x0C9DC0 -- when the mode global is 1 starts the request, then if the status is 1 or the second check reports not done, resets the two helpers and plays sound 4. */
extern int D_00201254;
extern int D_00201250;
extern int D_0020124C;
extern void func_0D6F50(int a0, int a1, int a2, int a3);
extern unsigned int func_0D6A58(void);
extern unsigned int func_0D6A68(void);
extern int func_0B6020(int index);
extern void func_0D6D30(int a0);
extern void func_01A828(int a0, int a1);

void func_0C9DC0(void)
{
    unsigned int status;

    status = 0;
    if (D_00201254 == 1) {
        func_0D6F50(1, D_0020124C, D_00201250, 0);
        status = func_0D6A58();
    }
    if (status == 1 || func_0D6A68() == 0) {
        func_0B6020(0);
        func_0D6D30(0);
        func_01A828(4, 0);
    }
}
