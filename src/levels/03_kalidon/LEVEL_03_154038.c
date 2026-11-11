extern char D_003ACA68[];
extern void func_150620(void);
extern void func_02E320(void *);
void func_154038(void)
{
    D_003ACA68[0x478] = 0;
    D_003ACA68[0x494] = 0;
    func_150620();
    func_02E320(D_003ACA68 + 0x244);
}