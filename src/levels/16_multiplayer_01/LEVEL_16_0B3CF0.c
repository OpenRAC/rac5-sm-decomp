/* LEVEL_16:0x0B3CF0 -- sets or clears the enable flags of a group of entries. */
typedef struct El {
    char pad[0xCC];
    char on;
} El;
extern El D_001AE540;
extern El D_001AE458;
extern El D_001AE710;
extern El D_001AE7F8;
extern char D_001AE6F4;
extern char D_001AEA94;
extern char D_001E4090[];
extern int func_034DC0(char *p);
extern int func_112E10(void);

void func_0B3CF0(void)
{
    if (func_034DC0(D_001E4090)) {
        D_001AE540.on = 0;
        D_001AE458.on = 0;
        D_001AE710.on = 0;
        D_001AE7F8.on = 0;
    } else {
        D_001AE458.on = 1;
        D_001AE710.on = 1;
        D_001AE7F8.on = 1;
        D_001AE540.on = 1;
    }
    if (func_112E10() == 0) {
        D_001AE6F4 = 0;
        D_001AE458.on = 0;
        D_001AE540.on = 0;
        D_001AE7F8.on = 0;
        D_001AEA94 = 0;
        D_001AE710.on = 0;
    }
}
