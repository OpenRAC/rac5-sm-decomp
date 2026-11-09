/* LEVEL_24:0x128B68 -- placement copy of FRONTEND_020A38.c: when a status byte is set, runs a status check and then either a main sequence of helper calls or a shorter fallback sequence. */

extern unsigned char D_001D7CD8;

int func_128A48(void);
void func_128CC0(void);
int func_128AE0(void);
int func_128B38(int a0);
void func_0D0DA8(int a0, int a1, int a2);
int func_128818(void);
void func_128A10(void);
int func_128A98(void);
void func_128A78(void);

void func_128B68(void)
{
    int r;

    if (D_001D7CD8 != 0) {
        if (func_128A48() != 0) {
            func_128CC0();
            r = func_128B38(func_128AE0());
            func_0D0DA8(2, r, 0x21A);
            if (func_128AE0() == 0x20000) {
                func_128818();
            }
            func_128A10();
        } else {
            if (func_128A98() != 0) {
                func_0D0DA8(2, 0xA6D, 0x21A);
                func_128818();
                func_128A78();
            }
        }
    }
}
