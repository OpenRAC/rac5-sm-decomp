/* LEVEL_22:0x0BE1F8 -- placement copy of LEVEL_01_0CFCB8.c: dispatches on a state word to one of three helpers, then calls the common finisher. */

void func_0BD6E0(void);
void func_0BE0C8(void);
void func_0BD860(void);
void func_0BF400(void);
extern int D_00162808;

void func_0BE1F8(void)
{
    switch (D_00162808) {
    case 0:
        break;
    case 1:
        func_0BD6E0();
        break;
    case 2:
        func_0BE0C8();
        break;
    case 3:
        func_0BD860();
        break;
    }
    func_0BF400();
}
