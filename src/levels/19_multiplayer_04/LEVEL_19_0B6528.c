/* LEVEL_19:0x0B6528 -- placement copy of LEVEL_01_0C7FE0.c: picks the handler entry from the global mode and the flag byte, noting entry 29 in a global when the flag is set. */
extern int D_001AFE04;
extern unsigned char D_001AFDA8;
extern int D_001AFE0C;
extern void func_112450(int *p, int a1);

void func_0B6528(int *p)
{
    if (D_001AFE04 == 1) {
        func_112450(p, 12);
    } else if (D_001AFDA8 != 0) {
        D_001AFE0C = 29;
        func_112450(p, 19);
    } else {
        func_112450(p, 30);
    }
}
