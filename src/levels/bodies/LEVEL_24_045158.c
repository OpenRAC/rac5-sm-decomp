/* LEVEL_24:0x045158 -- placement copy of LEVEL_01_04C1D0.c: runs a status check, optional hook, then one of two follow-up calls. */

extern unsigned char D_001C5269[];

void func_025CF0(void);
void func_17C1D0(void *p);
int func_0ADBE8(void);
void func_0ADC20(void);
int func_025B10(void);
void func_027808(void);
void func_0169D0(void);

void func_045158(void *p)
{
    func_025CF0();
    if (D_001C5269[0] != 0) {
        func_17C1D0(p);
    }
    if (func_0ADBE8() != 0) {
        func_0ADC20();
    }
    if (func_025B10() != 0) {
        func_027808();
    } else {
        func_0169D0();
    }
}
