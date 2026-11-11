/* LEVEL_08:0x0BAA08 -- placement copy of LEVEL_01_0B00D0.c: per-frame update sequence for the menu screen. */
extern unsigned char D_00244CC8;
extern unsigned char D_00244E90;
extern unsigned char D_00244FD0;
extern unsigned char D_00244CA4;
extern unsigned char D_00244CA5;
extern unsigned char D_00244FD1;
extern unsigned char D_00244FD2;
extern int D_00244FD4;
extern unsigned int D_00240088;
extern unsigned char D_0024A4B0;
extern char D_0036C820[];
extern char D_0036C928[];
extern char D_0025B060[];
extern char D_0025B070[];

extern void func_0BA970(void);
extern void func_142E50(void *p);
extern void func_0B3478(void);
extern void func_0BAF28(void);
extern void func_0BABF8(void);
extern void func_0BADB0(void);
extern void func_0BCE20(int a, int b, float x, float y);
extern void func_0C0280(int a, void *b, void *c, int d);
extern void func_0B93E0(unsigned int a, unsigned int b, float f);
extern void func_0C0980(void);
extern void func_0C1E68(void);
extern void func_0BC8F0(void);
extern void func_0BC150(void);
extern void func_0C1108(void);
extern void func_0BCF28(void);
extern void func_0C0618(void);
extern void func_0BFA78(void);
extern void func_0BD400(void);
extern void func_0BF790(void);
extern void func_0BDEC8(void);
extern void func_0BB8C8(void);
extern void func_0B35D8(unsigned int a);
extern void func_0BFFC8(void);
extern void func_0BF6C0(void);
extern void func_0B0760(int a);
extern void func_0D59D8(void);
extern void func_0B3970(void);

void func_0BAA08(void)
{
    if (D_00244CC8) {
        func_0BA970();
        func_142E50(D_0036C820);
        if (D_00244E90) {
            func_0B3478();
        } else {
            if (D_00244FD0) func_0BAF28();
            if (D_00244CA4) func_0BABF8();
            if (D_00244CA5) func_0BADB0();
            if (D_00244FD1) {
                D_00244FD1 = 0;
                func_0BCE20(52, 90, 100.0f, 75.0f);
            }
            if (D_00244FD2) {
                D_00244FD2 = 0;
                D_00244FD4 = 120;
            }
            if (D_00244FD4 != 0) {
                func_0C0280(1, D_0025B060, D_0025B070, 0);
                D_00244FD4--;
            }
            if (D_00240088 != 0xFFFFFFFF) func_0B93E0(D_00240088, 0xFFFFFFFF, 0.0f);
            func_0C0980();
            func_0C1E68();
            func_0BC8F0();
            func_0BC150();
            func_0C1108();
            func_0BCF28();
            func_0C0618();
            func_0BFA78();
            func_0BD400();
            func_0BF790();
            func_0BDEC8();
            func_0BB8C8();
            func_0B35D8(0xFFFFFFFF);
            func_142E50(D_0036C928);
            func_0BFFC8();
            func_0BF6C0();
            func_0B0760(0);
            if (D_0024A4B0) func_0D59D8();
            func_0B3970();
        }
    }
}
