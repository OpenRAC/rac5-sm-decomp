/* LEVEL_23:0x0BB320 -- placement copy of LEVEL_01_0C4580.c: runs setup helpers and, when a data byte is set, runs four more helpers. */

extern char D_001D37AC[];
extern unsigned int func_123C28(int a0);
extern void func_0CDD80(int a0, unsigned int a1, int a2, int a3);
extern void func_024990(void);
extern void func_0ACDE8(int a0);
extern void func_0CDB60(int a0);
extern void func_0B3918(int a0);
extern void func_019338(int a0, int a1);

void func_0BB320(void)
{
    unsigned int r;

    r = func_123C28(0x2F6);
    func_0CDD80(0, r, 0, 0);
    func_024990();
    if (*(unsigned char *)D_001D37AC != 0) {
        func_0ACDE8(0);
        func_0CDB60(0);
        func_0B3918(0);
        func_019338(4, 0);
    }
}
