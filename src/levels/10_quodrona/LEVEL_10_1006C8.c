/* LEVEL_10:0x1006C8 -- placement copy of LEVEL_01_100D88.c: masks a flag word and runs two table routines on a stack buffer. */

extern void func_096CB8(void *a0, unsigned int a1, unsigned int a2, int a3, int a4, int a5, int a6);
extern void func_096E90(void *a0);
extern char D_000FF4A0[];

void func_1006C8(unsigned int a0)
{
    unsigned int buf[4];
    unsigned int m;

    m = (a0 & 0xFFFFFFC3) | 4;
    func_096CB8(buf, m & 0xFFFFFFFC, (unsigned int)D_000FF4A0, 60, 0, -1, 0);
    func_096E90(buf);
}
