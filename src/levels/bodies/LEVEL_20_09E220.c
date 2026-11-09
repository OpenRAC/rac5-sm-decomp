/* LEVEL_20:0x09E220 -- placement copy of LEVEL_16_0B3CF0.c: sets or clears the enable flags of a group of entries. */
typedef struct El {
    char pad[0xCC];
    char on;
} El;
extern El D_00110C20;
extern El D_00110B38;
extern El D_00110DF0;
extern El D_00110ED8;
extern char D_00110DD4;
extern char D_00111174;
extern char D_0013BA10[];
extern int func_02F1A8(char *p);
extern int func_0E5980(void);

void func_09E220(void)
{
    if (func_02F1A8(D_0013BA10)) {
        D_00110C20.on = 0;
        D_00110B38.on = 0;
        D_00110DF0.on = 0;
        D_00110ED8.on = 0;
    } else {
        D_00110B38.on = 1;
        D_00110DF0.on = 1;
        D_00110ED8.on = 1;
        D_00110C20.on = 1;
    }
    if (func_0E5980() == 0) {
        D_00110DD4 = 0;
        D_00110B38.on = 0;
        D_00110C20.on = 0;
        D_00110ED8.on = 0;
        D_00111174 = 0;
        D_00110DF0.on = 0;
    }
}
