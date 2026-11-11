extern unsigned char D_0031D338[];
extern int D_00205018[];
extern char D_00205550[];
extern char D_00205578[];
extern void func_0E7F00(void *dst, void *src);
extern void func_0E8770(void *dst, int value, void *buf, void *table);

void func_0E8808(int index)
{
    int offset = index * 100;

    if (D_0031D338[offset] == 0) {
        char buf[16];
        int value = D_00205018[index * 9];

        func_0E7F00(buf, &D_00205018[index * 9]);
        func_0E8770(D_0031D338 + offset + 4, value, buf, D_00205550);
        func_0E8770(D_0031D338 + offset + 0x34, value, buf, D_00205578);
        D_0031D338[offset] = 1;
    }
}
