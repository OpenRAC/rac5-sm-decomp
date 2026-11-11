/* LEVEL_10:0x0B11E8 -- placement copy of LEVEL_01_0B00D0.c: per-frame update sequence for the menu screen. */
extern unsigned char D_00204E08;
extern unsigned char D_00204FD0;
extern unsigned char D_00205110;
extern unsigned char D_00204DE4;
extern unsigned char D_00204DE5;
extern unsigned char D_00205111;
extern unsigned char D_00205112;
extern int D_00205114;
extern unsigned int D_002001C8;
extern unsigned char D_0020A5F0;
extern char D_003269A0[];
extern char D_00326AA8[];
extern char D_0021A360[];
extern char D_0021A370[];

extern void func_0B1150(void);
extern void func_12F778(void *p);
extern void func_0A9C58(void);
extern void func_0B1708(void);
extern void func_0B13D8(void);
extern void func_0B1590(void);
extern void func_0B33B0(int a, int b, float x, float y);
extern void func_0B6680(int a, void *b, void *c, int d);
extern void func_0AFBC0(unsigned int a, unsigned int b, float f);
extern void func_0B6C68(void);
extern void func_0B81F8(void);
extern void func_0B2E80(void);
extern void func_0B2930(void);
extern void func_0B73F0(void);
extern void func_0B3578(void);
extern void func_0B6A18(void);
extern void func_0B5E78(void);
extern void func_0B3980(void);
extern void func_0B5B90(void);
extern void func_0B42F8(void);
extern void func_0B20A8(void);
extern void func_0A9DB8(unsigned int a);
extern void func_0B63C8(void);
extern void func_0B5AC0(void);
extern void func_0A6F80(int a);
extern void func_0CBE70(void);
extern void func_0AA150(void);

void func_0B11E8(void)
{
    if (D_00204E08) {
        func_0B1150();
        func_12F778(D_003269A0);
        if (D_00204FD0) {
            func_0A9C58();
        } else {
            if (D_00205110) func_0B1708();
            if (D_00204DE4) func_0B13D8();
            if (D_00204DE5) func_0B1590();
            if (D_00205111) {
                D_00205111 = 0;
                func_0B33B0(52, 90, 100.0f, 75.0f);
            }
            if (D_00205112) {
                D_00205112 = 0;
                D_00205114 = 120;
            }
            if (D_00205114 != 0) {
                func_0B6680(1, D_0021A360, D_0021A370, 0);
                D_00205114--;
            }
            if (D_002001C8 != 0xFFFFFFFF) func_0AFBC0(D_002001C8, 0xFFFFFFFF, 0.0f);
            func_0B6C68();
            func_0B81F8();
            func_0B2E80();
            func_0B2930();
            func_0B73F0();
            func_0B3578();
            func_0B6A18();
            func_0B5E78();
            func_0B3980();
            func_0B5B90();
            func_0B42F8();
            func_0B20A8();
            func_0A9DB8(0xFFFFFFFF);
            func_12F778(D_00326AA8);
            func_0B63C8();
            func_0B5AC0();
            func_0A6F80(0);
            if (D_0020A5F0) func_0CBE70();
            func_0AA150();
        }
    }
}
