/* LEVEL_08:0x0B3478 -- placement copy of LEVEL_01_0A8B40.c: debug overlay: draws the status box and, when the tracked id is the expected one, prints three of its values. */
extern int D_00244E94;
extern unsigned int D_00244E98;
extern unsigned char D_00244CA4;
extern char D_0025B000[];
extern char D_0025B010[];
extern char D_0025B020[];
extern char D_0025B038[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0B93E0(int a, unsigned int b, float c);
extern int func_0B91A8(void);
extern void func_0B6DE8(int a, int b, int c, int d, int e);
extern void func_0B35D8(unsigned int v);
extern void func_0B41F8(int a, int b, char *s);
extern int func_0B91F8(int v);
extern void func_0BABF8(void);

void func_0B3478(void)
{
    char buf[256];

    func_0B93E0(D_00244E94, 0xFFFFFFFF, 0.0f);
    if (func_0B91A8() != 0) {
        if (D_00244E98 == 0xE0FFFFFF) {
            func_0B6DE8(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
            func_0B35D8(D_00244E98);
            sprintf(buf, D_0025B000, D_00244E94);
            func_0B41F8(0x20, 0xC8, buf);
            sprintf(buf, D_0025B010, func_0B91F8(D_00244E94));
            func_0B41F8(0x20, 0xD8, buf);
            sprintf(buf, D_0025B020, func_0B91A8());
            func_0B41F8(0x20, 0xE8, buf);
        }
    } else {
        func_0B6DE8(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
        func_0B41F8(0x20, 0xC8, D_0025B038);
    }
    if (D_00244CA4 != 0) {
        func_0BABF8();
    }
}
