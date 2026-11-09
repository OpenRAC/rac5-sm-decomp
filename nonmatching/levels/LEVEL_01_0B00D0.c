/* LEVEL_01.REL:0x0B00D0: reviewed 496-byte candidate, held for ABI review.
 * Per-frame update sequence for the menu screen.
 * pinned C with gnu-ee-trial links 496/496 bytes and is byte-exact at this and
 * 14 other USA placements, but the prototypes disagree.
 * It declares func_0B54A8 returning void with (int, pointer, pointer, int),
 * but the accepted LEVEL_01_0B54A8.c defines it returning void with (pointer,
 * pointer, pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern unsigned char D_001FBE08;
extern unsigned char D_001FBFD0;
extern unsigned char D_001FC110;
extern unsigned char D_001FBDE4;
extern unsigned char D_001FBDE5;
extern unsigned char D_001FC111;
extern unsigned char D_001FC112;
extern int D_001FC114;
extern unsigned int D_001F71C8;
extern unsigned char D_002015F0;
extern char D_0031D5A0[];
extern char D_0031D6A8[];
extern char D_002113E0[];
extern char D_002113F0[];

extern void func_0B0038(void);
extern void func_131918(void *p);
extern void func_0A8B40(void);
extern void func_0B05F0(void);
extern void func_0B02C0(void);
extern void func_0B0478(void);
extern void func_0B2298(int a, int b, float x, float y);
extern void func_0B54A8(int a, void *b, void *c, int d);
extern void func_0AEAA8(unsigned int a, unsigned int b, float f);
extern void func_0B5A90(void);
extern void func_0B6F78(void);
extern void func_0B1D68(void);
extern void func_0B1818(void);
extern void func_0B6218(void);
extern void func_0B23A0(void);
extern void func_0B5840(void);
extern void func_0B4CA0(void);
extern void func_0B27A8(void);
extern void func_0B49B8(void);
extern void func_0B3120(void);
extern void func_0B0F90(void);
extern void func_0A8CA0(unsigned int a);
extern void func_0B51F0(void);
extern void func_0B48E8(void);
extern void func_0A5E68(int a);
extern void func_0CAA30(void);
extern void func_0A9038(void);

void func_0B00D0(void)
{
    if (D_001FBE08) {
        func_0B0038();
        func_131918(D_0031D5A0);
        if (D_001FBFD0) {
            func_0A8B40();
        } else {
            if (D_001FC110) func_0B05F0();
            if (D_001FBDE4) func_0B02C0();
            if (D_001FBDE5) func_0B0478();
            if (D_001FC111) {
                D_001FC111 = 0;
                func_0B2298(52, 90, 100.0f, 75.0f);
            }
            if (D_001FC112) {
                D_001FC112 = 0;
                D_001FC114 = 120;
            }
            if (D_001FC114 != 0) {
                func_0B54A8(1, D_002113E0, D_002113F0, 0);
                D_001FC114--;
            }
            if (D_001F71C8 != 0xFFFFFFFF) func_0AEAA8(D_001F71C8, 0xFFFFFFFF, 0.0f);
            func_0B5A90();
            func_0B6F78();
            func_0B1D68();
            func_0B1818();
            func_0B6218();
            func_0B23A0();
            func_0B5840();
            func_0B4CA0();
            func_0B27A8();
            func_0B49B8();
            func_0B3120();
            func_0B0F90();
            func_0A8CA0(0xFFFFFFFF);
            func_131918(D_0031D6A8);
            func_0B51F0();
            func_0B48E8();
            func_0A5E68(0);
            if (D_002015F0) func_0CAA30();
            func_0A9038();
        }
    }
}
