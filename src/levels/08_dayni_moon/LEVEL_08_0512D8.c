/* LEVEL_08:0x0512D8 -- placement copy of LEVEL_01_04C1D0.c: runs a status check, optional hook, then one of two follow-up calls. */

extern unsigned char D_0023D4A9[];

void func_028B90(void);
void func_1D01E8(void *p);
int func_0BF148(void);
void func_0BF180(void);
int func_028900(void);
void func_02A840(void);
void func_018650(void);

void func_0512D8(void *p)
{
    func_028B90();
    if (D_0023D4A9[0] != 0) {
        func_1D01E8(p);
    }
    if (func_0BF148() != 0) {
        func_0BF180();
    }
    if (func_028900() != 0) {
        func_02A840();
    } else {
        func_018650();
    }
}
