/* LEVEL_09:0x12D370 -- placement copy of LEVEL_01_1343D8.c: runs the handler for the current global mode (1 or 2). */
extern int D_001F0B80;

extern void func_12D3D8(void);
extern void func_12D7A0(void);

void func_12D370(void)
{
    switch (D_001F0B80) {
    case 1:
        func_12D3D8();
        break;
    case 2:
        func_12D7A0();
        break;
    case 0:
        break;
    }
}
