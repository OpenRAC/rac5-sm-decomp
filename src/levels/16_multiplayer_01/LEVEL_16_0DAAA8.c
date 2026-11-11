extern unsigned char D_0027E638[];
extern int D_001CB058[];
extern char D_001CB590[];
extern char D_001CB5B8[];
extern void func_0DA1A0(void *dst, void *src);
extern void func_0DAA10(void *dst, int value, void *buf, void *table);

void func_0DAAA8(int index)
{
    int offset = index * 100;

    if (D_0027E638[offset] == 0) {
        char buf[16];
        int value = D_001CB058[index * 9];

        func_0DA1A0(buf, &D_001CB058[index * 9]);
        func_0DAA10(D_0027E638 + offset + 4, value, buf, D_001CB590);
        func_0DAA10(D_0027E638 + offset + 0x34, value, buf, D_001CB5B8);
        D_0027E638[offset] = 1;
    }
}
