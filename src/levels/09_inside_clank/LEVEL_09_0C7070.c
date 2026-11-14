/* LEVEL_09:0x0C7070 -- placement copy of LEVEL_01_0C9DC0.c: when the mode global is 1 starts the request, then if the status is 1 or the second check reports not done, resets the two helpers and plays sound 4. */
extern int D_001EB054;
extern int D_001EB050;
extern int D_001EB04C;
extern void func_0D4200(int a0, int a1, int a2, int a3);
extern unsigned int func_0D3D08(void);
extern unsigned int func_0D3D18(void);
extern int func_0B32D0(int index);
extern void func_0D3FE0(int a0);
extern void func_019C18(int a0, int a1);

void func_0C7070(void)
{
    unsigned int status;

    status = 0;
    if (D_001EB054 == 1) {
        func_0D4200(1, D_001EB04C, D_001EB050, 0);
        status = func_0D3D08();
    }
    if (status == 1 || func_0D3D18() == 0) {
        func_0B32D0(0);
        func_0D3FE0(0);
        func_019C18(4, 0);
    }
}
