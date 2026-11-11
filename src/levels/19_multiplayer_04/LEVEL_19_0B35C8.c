/* LEVEL_19:0x0B35C8 -- placement copy of LEVEL_16_0B3CF0.c: sets or clears the enable flags of a group of entries. */
typedef struct El {
    char pad[0xCC];
    char on;
} El;
extern El D_001AF6C0;
extern El D_001AF5D8;
extern El D_001AF890;
extern El D_001AF978;
extern char D_001AF874;
extern char D_001AFC14;
extern char D_001E4210[];
extern int func_034150(char *p);
extern int func_1135B8(void);

void func_0B35C8(void)
{
    if (func_034150(D_001E4210)) {
        D_001AF6C0.on = 0;
        D_001AF5D8.on = 0;
        D_001AF890.on = 0;
        D_001AF978.on = 0;
    } else {
        D_001AF5D8.on = 1;
        D_001AF890.on = 1;
        D_001AF978.on = 1;
        D_001AF6C0.on = 1;
    }
    if (func_1135B8() == 0) {
        D_001AF874 = 0;
        D_001AF5D8.on = 0;
        D_001AF6C0.on = 0;
        D_001AF978.on = 0;
        D_001AFC14 = 0;
        D_001AF890.on = 0;
    }
}
