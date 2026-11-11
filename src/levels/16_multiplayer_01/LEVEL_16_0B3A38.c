/* LEVEL_16:0x0B3A38 -- placement copy of LEVEL_01_0C4580.c: runs setup helpers and, when a data byte is set, runs four more helpers. */

extern char D_001AE424[];
extern unsigned int func_10F330(int a0);
extern void func_0C6648(int a0, unsigned int a1, int a2, int a3);
extern void func_0243D0(void);
extern int func_0A50B0(int index);
extern void func_0C6428(int a0);
extern void func_0AC000(int a0);
extern void func_018B98(int a0, int a1);

void func_0B3A38(void)
{
    unsigned int r;

    r = func_10F330(0x2F6);
    func_0C6648(0, r, 0, 0);
    func_0243D0();
    if (*(unsigned char *)D_001AE424 != 0) {
        func_0A50B0(0);
        func_0C6428(0);
        func_0AC000(0);
        func_018B98(4, 0);
    }
}
