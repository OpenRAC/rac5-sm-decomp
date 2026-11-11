/* LEVEL_20:0x09DF68 -- placement copy of LEVEL_01_0C4580.c: runs setup helpers and, when a data byte is set, runs four more helpers. */

extern char D_00110B04[];
extern unsigned int func_0E2118(int a0);
extern void func_0B0B78(int a0, unsigned int a1, int a2, int a3);
extern void func_021078(void);
extern int func_08F6B0(int a);
extern void func_0B0958(int a0);
extern void func_096530(int a0);
extern void func_016950(int a0, int a1);

void func_09DF68(void)
{
    unsigned int r;

    r = func_0E2118(0x2F6);
    func_0B0B78(0, r, 0, 0);
    func_021078();
    if (*(unsigned char *)D_00110B04 != 0) {
        func_08F6B0(0);
        func_0B0958(0);
        func_096530(0);
        func_016950(4, 0);
    }
}
