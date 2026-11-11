/* LEVEL_01:0x0C4580 -- runs setup helpers and, when a data byte is set, runs four more helpers. */

extern char D_002003AC[];
extern unsigned int func_1324B0(int a0);
extern void func_0D6F50(int a0, unsigned int a1, int a2, int a3);
extern void func_026938(void);
extern int func_0B6020(int index);
extern void func_0D6D30(int a0);
extern void func_0BCB78(int a0);
extern void func_01A828(int a0, int a1);

void func_0C4580(void)
{
    unsigned int r;

    r = func_1324B0(0x2F6);
    func_0D6F50(0, r, 0, 0);
    func_026938();
    if (*(unsigned char *)D_002003AC != 0) {
        func_0B6020(0);
        func_0D6D30(0);
        func_0BCB78(0);
        func_01A828(4, 0);
    }
}
