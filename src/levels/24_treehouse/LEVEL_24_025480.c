/* LEVEL_24:0x025480 -- placement copy of LEVEL_01_027B50.c: true when a status query (kind 0x1B, mask 0xFF) reports at least 5 twice and then at least 4. */
extern unsigned int func_024D38(int kind, int mask);

int func_025480(void)
{
    if (func_024D38(0x1B, 0xFF) >= 5) {
        if (func_024D38(0x1B, 0xFF) >= 5) {
            if (func_024D38(0x1B, 0xFF) >= 4)
                return 1;
        }
    }
    return 0;
}
