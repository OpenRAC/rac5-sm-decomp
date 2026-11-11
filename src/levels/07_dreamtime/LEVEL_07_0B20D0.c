/* LEVEL_07:0x0B20D0 -- placement copy of LEVEL_01_0B00D0.c: per-frame update sequence for the menu screen. */
extern unsigned char D_00210108;
extern unsigned char D_002102D0;
extern unsigned char D_00210410;
extern unsigned char D_002100E4;
extern unsigned char D_002100E5;
extern unsigned char D_00210411;
extern unsigned char D_00210412;
extern int D_00210414;
extern unsigned int D_0020B4C8;
extern unsigned char D_002158F0;
extern char D_00332EA0[];
extern char D_00332FA8[];
extern char D_002260E0[];
extern char D_002260F0[];

extern void func_0B2038(void);
extern void func_134918(void *p);
extern void func_0AAB40(void);
extern void func_0B25F0(void);
extern void func_0B22C0(void);
extern void func_0B2478(void);
extern void func_0B4298(int a, int b, float x, float y);
extern void func_0B7508(int a, void *b, void *c, int d);
extern void func_0B0AA8(unsigned int a, unsigned int b, float f);
extern void func_0B7AF0(void);
extern void func_0B8FD8(void);
extern void func_0B3D68(void);
extern void func_0B3818(void);
extern void func_0B8278(void);
extern void func_0B4400(void);
extern void func_0B78A0(void);
extern void func_0B6D00(void);
extern void func_0B4808(void);
extern void func_0B6A18(void);
extern void func_0B5180(void);
extern void func_0B2F90(void);
extern void func_0AACA0(unsigned int a);
extern void func_0B7250(void);
extern void func_0B6948(void);
extern void func_0A7E68(int a);
extern void func_0CCA90(void);
extern void func_0AB038(void);

void func_0B20D0(void)
{
    if (D_00210108) {
        func_0B2038();
        func_134918(D_00332EA0);
        if (D_002102D0) {
            func_0AAB40();
        } else {
            if (D_00210410) func_0B25F0();
            if (D_002100E4) func_0B22C0();
            if (D_002100E5) func_0B2478();
            if (D_00210411) {
                D_00210411 = 0;
                func_0B4298(52, 90, 100.0f, 75.0f);
            }
            if (D_00210412) {
                D_00210412 = 0;
                D_00210414 = 120;
            }
            if (D_00210414 != 0) {
                func_0B7508(1, D_002260E0, D_002260F0, 0);
                D_00210414--;
            }
            if (D_0020B4C8 != 0xFFFFFFFF) func_0B0AA8(D_0020B4C8, 0xFFFFFFFF, 0.0f);
            func_0B7AF0();
            func_0B8FD8();
            func_0B3D68();
            func_0B3818();
            func_0B8278();
            func_0B4400();
            func_0B78A0();
            func_0B6D00();
            func_0B4808();
            func_0B6A18();
            func_0B5180();
            func_0B2F90();
            func_0AACA0(0xFFFFFFFF);
            func_134918(D_00332FA8);
            func_0B7250();
            func_0B6948();
            func_0A7E68(0);
            if (D_002158F0) func_0CCA90();
            func_0AB038();
        }
    }
}
