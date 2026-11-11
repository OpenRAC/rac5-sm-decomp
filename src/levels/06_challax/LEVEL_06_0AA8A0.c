/* LEVEL_06:0x0AA8A0 -- placement copy of LEVEL_01_0B00D0.c: per-frame update sequence for the menu screen. */
extern unsigned char D_001EAD08;
extern unsigned char D_001EAED0;
extern unsigned char D_001EB010;
extern unsigned char D_001EACE4;
extern unsigned char D_001EACE5;
extern unsigned char D_001EB011;
extern unsigned char D_001EB012;
extern int D_001EB014;
extern unsigned int D_001E60C8;
extern unsigned char D_001F04F0;
extern char D_0030A320[];
extern char D_0030A428[];
extern char D_00200260[];
extern char D_00200270[];

extern void func_0AA808(void);
extern void func_127FE8(void *p);
extern void func_0A3310(void);
extern void func_0AADC0(void);
extern void func_0AAA90(void);
extern void func_0AAC48(void);
extern void func_0ACA68(int a, int b, float x, float y);
extern void func_0AFCD0(int a, void *b, void *c, int d);
extern void func_0A9278(unsigned int a, unsigned int b, float f);
extern void func_0B02B8(void);
extern void func_0B1848(void);
extern void func_0AC538(void);
extern void func_0ABFE8(void);
extern void func_0B0A40(void);
extern void func_0ACBE0(void);
extern void func_0B0068(void);
extern void func_0AF4E0(void);
extern void func_0ACFE8(void);
extern void func_0AF1F8(void);
extern void func_0AD960(void);
extern void func_0AB760(void);
extern void func_0A3470(unsigned int a);
extern void func_0AFA18(void);
extern void func_0AF128(void);
extern void func_0A0638(int a);
extern void func_0C5330(void);
extern void func_0A3808(void);

void func_0AA8A0(void)
{
    if (D_001EAD08) {
        func_0AA808();
        func_127FE8(D_0030A320);
        if (D_001EAED0) {
            func_0A3310();
        } else {
            if (D_001EB010) func_0AADC0();
            if (D_001EACE4) func_0AAA90();
            if (D_001EACE5) func_0AAC48();
            if (D_001EB011) {
                D_001EB011 = 0;
                func_0ACA68(52, 90, 100.0f, 75.0f);
            }
            if (D_001EB012) {
                D_001EB012 = 0;
                D_001EB014 = 120;
            }
            if (D_001EB014 != 0) {
                func_0AFCD0(1, D_00200260, D_00200270, 0);
                D_001EB014--;
            }
            if (D_001E60C8 != 0xFFFFFFFF) func_0A9278(D_001E60C8, 0xFFFFFFFF, 0.0f);
            func_0B02B8();
            func_0B1848();
            func_0AC538();
            func_0ABFE8();
            func_0B0A40();
            func_0ACBE0();
            func_0B0068();
            func_0AF4E0();
            func_0ACFE8();
            func_0AF1F8();
            func_0AD960();
            func_0AB760();
            func_0A3470(0xFFFFFFFF);
            func_127FE8(D_0030A428);
            func_0AFA18();
            func_0AF128();
            func_0A0638(0);
            if (D_001F04F0) func_0C5330();
            func_0A3808();
        }
    }
}
