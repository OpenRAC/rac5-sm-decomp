/* LEVEL_18:0x0B2A10 -- placement copy of LEVEL_01_0C4580.c: runs setup helpers and, when a data byte is set, runs four more helpers. */

extern char D_001AF8A4[];
extern unsigned int func_10DFE0(int a0);
extern void func_0C5620(int a0, unsigned int a1, int a2, int a3);
extern void func_023A18(void);
extern void func_0A40A8(int a0);
extern void func_0C5400(int a0);
extern void func_0AAFD8(int a0);
extern void func_0181E0(int a0, int a1);

void func_0B2A10(void)
{
    unsigned int r;

    r = func_10DFE0(0x2F6);
    func_0C5620(0, r, 0, 0);
    func_023A18();
    if (*(unsigned char *)D_001AF8A4 != 0) {
        func_0A40A8(0);
        func_0C5400(0);
        func_0AAFD8(0);
        func_0181E0(4, 0);
    }
}
