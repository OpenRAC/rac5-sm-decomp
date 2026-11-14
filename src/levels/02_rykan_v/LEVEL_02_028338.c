/* LEVEL_02:0x028338 -- placement copy of LEVEL_01_027B50.c: true when a status query (kind 0x1B, mask 0xFF) reports at least 5 twice and then at least 4. */
extern unsigned int func_027BF0(int kind, int mask);

int func_028338(void)
{
    if (func_027BF0(0x1B, 0xFF) >= 5) {
        if (func_027BF0(0x1B, 0xFF) >= 5) {
            if (func_027BF0(0x1B, 0xFF) >= 4)
                return 1;
        }
    }
    return 0;
}
