/* LEVEL_06:0x0BEE80 -- placement copy of LEVEL_01_0C4580.c: runs setup helpers and, when a data byte is set, runs four more helpers. */

extern char D_001EF2AC[];
extern unsigned int func_128B80(int a0);
extern void func_0D1850(int a0, unsigned int a1, int a2, int a3);
extern void func_024FB8(void);
extern int func_0B0848(int a);
extern void func_0D1630(int a0);
extern void func_0B7478(int a0);
extern void func_019028(int a0, int a1);

void func_0BEE80(void)
{
    unsigned int r;

    r = func_128B80(0x2F6);
    func_0D1850(0, r, 0, 0);
    func_024FB8();
    if (*(unsigned char *)D_001EF2AC != 0) {
        func_0B0848(0);
        func_0D1630(0);
        func_0B7478(0);
        func_019028(4, 0);
    }
}
