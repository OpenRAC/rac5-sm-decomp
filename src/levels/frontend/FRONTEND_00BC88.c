/* FRONTEND:0x00BC88 -- when the pending flag is set, reloads screen 5 and its text block, clears the flag; then refreshes the widgets and raises bit 1. */
extern unsigned char D_00030108;
extern char D_0012D1C0[];
extern void func_006120(int new_index);
extern void func_006200(char *src);
extern void func_006320(void);
extern void func_006FA8(void);
extern void func_005D98(int bit);

void func_00BC88(void)
{
    if (D_00030108 != 0) {
        func_006120(5);
        func_006200(D_0012D1C0);
        func_006320();
        D_00030108 = 0;
    }
    func_006FA8();
    func_005D98(1);
}
