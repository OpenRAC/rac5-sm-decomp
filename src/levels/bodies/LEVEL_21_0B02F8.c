/* LEVEL_21:0x0B02F8 -- placement copy of LEVEL_01_0CFCB8.c: dispatches on a state word to one of three helpers, then calls the common finisher. */

void func_0AF7E0(void);
void func_0B01C8(void);
void func_0AF960(void);
void func_0B1500(void);
extern int D_00158108;

void func_0B02F8(void)
{
    switch (D_00158108) {
    case 0:
        break;
    case 1:
        func_0AF7E0();
        break;
    case 2:
        func_0B01C8();
        break;
    case 3:
        func_0AF960();
        break;
    }
    func_0B1500();
}
