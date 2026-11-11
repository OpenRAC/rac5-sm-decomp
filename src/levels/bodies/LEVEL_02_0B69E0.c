/* LEVEL_02:0x0B69E0 -- placement copy of LEVEL_01_0B00D0.c: per-frame update sequence for the menu screen. */
extern unsigned char D_00210DC8;
extern unsigned char D_00210F90;
extern unsigned char D_002110D0;
extern unsigned char D_00210DA4;
extern unsigned char D_00210DA5;
extern unsigned char D_002110D1;
extern unsigned char D_002110D2;
extern int D_002110D4;
extern unsigned int D_0020C188;
extern unsigned char D_002165B0;
extern char D_00334AA0[];
extern char D_00334BA8[];
extern char D_00226360[];
extern char D_00226370[];

extern void func_0B6948(void);
extern void func_137CC8(void *p);
extern void func_0AF450(void);
extern void func_0B6F00(void);
extern void func_0B6BD0(void);
extern void func_0B6D88(void);
extern void func_0B8BA8(int a, int b, float x, float y);
extern void func_0BBDB8(int a, void *b, void *c, int d);
extern void func_0B53B8(unsigned int a, unsigned int b, float f);
extern void func_0BC3A0(void);
extern void func_0BD888(void);
extern void func_0B8678(void);
extern void func_0B8128(void);
extern void func_0BCB28(void);
extern void func_0B8CB0(void);
extern void func_0BC150(void);
extern void func_0BB5B0(void);
extern void func_0B90B8(void);
extern void func_0BB2C8(void);
extern void func_0B9A30(void);
extern void func_0B78A0(void);
extern void func_0AF5B0(unsigned int a);
extern void func_0BBB00(void);
extern void func_0BB1F8(void);
extern void func_0AC778(int a);
extern void func_0D13C0(void);
extern void func_0AF948(void);

void func_0B69E0(void)
{
    if (D_00210DC8) {
        func_0B6948();
        func_137CC8(D_00334AA0);
        if (D_00210F90) {
            func_0AF450();
        } else {
            if (D_002110D0) func_0B6F00();
            if (D_00210DA4) func_0B6BD0();
            if (D_00210DA5) func_0B6D88();
            if (D_002110D1) {
                D_002110D1 = 0;
                func_0B8BA8(52, 90, 100.0f, 75.0f);
            }
            if (D_002110D2) {
                D_002110D2 = 0;
                D_002110D4 = 120;
            }
            if (D_002110D4 != 0) {
                func_0BBDB8(1, D_00226360, D_00226370, 0);
                D_002110D4--;
            }
            if (D_0020C188 != 0xFFFFFFFF) func_0B53B8(D_0020C188, 0xFFFFFFFF, 0.0f);
            func_0BC3A0();
            func_0BD888();
            func_0B8678();
            func_0B8128();
            func_0BCB28();
            func_0B8CB0();
            func_0BC150();
            func_0BB5B0();
            func_0B90B8();
            func_0BB2C8();
            func_0B9A30();
            func_0B78A0();
            func_0AF5B0(0xFFFFFFFF);
            func_137CC8(D_00334BA8);
            func_0BBB00();
            func_0BB1F8();
            func_0AC778(0);
            if (D_002165B0) func_0D13C0();
            func_0AF948();
        }
    }
}
