/* LEVEL_18:0x0B5C28 -- placement copy of LEVEL_01_0C7FE0.c: picks the handler entry from the global mode and the flag byte, noting entry 29 in a global when the flag is set. */
extern int D_001B0104;
extern unsigned char D_001B00A8;
extern int D_001B010C;
extern void func_110A60(int *p, int a1);

void func_0B5C28(int *p)
{
    if (D_001B0104 == 1) {
        func_110A60(p, 12);
    } else if (D_001B00A8 != 0) {
        D_001B010C = 29;
        func_110A60(p, 19);
    } else {
        func_110A60(p, 30);
    }
}
