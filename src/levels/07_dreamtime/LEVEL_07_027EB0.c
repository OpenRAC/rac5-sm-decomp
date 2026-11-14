/* LEVEL_07:0x027EB0 -- placement copy of LEVEL_01_027B50.c: true when a status query (kind 0x1B, mask 0xFF) reports at least 5 twice and then at least 4. */
extern unsigned int func_027768(int kind, int mask);

int func_027EB0(void)
{
    if (func_027768(0x1B, 0xFF) >= 5) {
        if (func_027768(0x1B, 0xFF) >= 5) {
            if (func_027768(0x1B, 0xFF) >= 4)
                return 1;
        }
    }
    return 0;
}
