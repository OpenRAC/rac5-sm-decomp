/* LEVEL_15:0x021B00 -- placement copy of LEVEL_01_027B50.c: true when a status query (kind 0x1B, mask 0xFF) reports at least 5 twice and then at least 4. */
extern unsigned int func_0213F8(int kind, int mask);

int func_021B00(void)
{
    if (func_0213F8(0x1B, 0xFF) >= 5) {
        if (func_0213F8(0x1B, 0xFF) >= 5) {
            if (func_0213F8(0x1B, 0xFF) >= 4)
                return 1;
        }
    }
    return 0;
}
