/* LEVEL_18:0x0B2CC8 -- placement copy of LEVEL_16_0B3CF0.c: sets or clears the enable flags of a group of entries. */
typedef struct El {
    char pad[0xCC];
    char on;
} El;
extern El D_001AF9C0;
extern El D_001AF8D8;
extern El D_001AFB90;
extern El D_001AFC78;
extern char D_001AFB74;
extern char D_001AFF14;
extern char D_001E4410[];
extern int func_033690(char *p);
extern int func_111BC8(void);

void func_0B2CC8(void)
{
    if (func_033690(D_001E4410)) {
        D_001AF9C0.on = 0;
        D_001AF8D8.on = 0;
        D_001AFB90.on = 0;
        D_001AFC78.on = 0;
    } else {
        D_001AF8D8.on = 1;
        D_001AFB90.on = 1;
        D_001AFC78.on = 1;
        D_001AF9C0.on = 1;
    }
    if (func_111BC8() == 0) {
        D_001AFB74 = 0;
        D_001AF8D8.on = 0;
        D_001AF9C0.on = 0;
        D_001AFC78.on = 0;
        D_001AFF14 = 0;
        D_001AFB90.on = 0;
    }
}
