/* LEVEL_04:0x077F30 -- placement copy of LEVEL_01_075998.c: lazily registers three handlers and stores their ids. */
extern int D_0020F594;
extern int D_0020F598;
extern int D_0020F59C;
extern int D_002B25DC;
extern int D_002B267C;
extern void func_078438(void);
extern void func_0783E0(void);
extern void func_079B80(void);
extern void func_079798(void);
extern void func_078F78(void);
extern void func_078ED8(void);
extern void func_099A40(char *buf, unsigned a, void (*f)(void), int size, int b, int c, void (*g)(void));
extern int func_099C18(char *buf);
void func_077F30(void)
{
    char buf[16];
    if (D_0020F594 < 0) {
        func_099A40(buf, (D_002B25DC << 16) | 0xB0007059, func_078438, 0x1C, 0, -1, func_0783E0);
        D_0020F594 = func_099C18(buf);
    }
    if (D_0020F598 < 0) {
        func_099A40(buf, (D_002B25DC << 16) | 0x98007059, func_079B80, 0x44, 0, -1, func_079798);
        D_0020F598 = func_099C18(buf);
    }
    if (D_0020F59C < 0) {
        func_099A40(buf, (D_002B267C << 16) | 0x88007059, func_078F78, 0x1C, 0, -1, func_078ED8);
        D_0020F59C = func_099C18(buf);
    }
}
