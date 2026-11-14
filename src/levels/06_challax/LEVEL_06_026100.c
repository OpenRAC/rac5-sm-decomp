/* LEVEL_06:0x026100 -- placement copy of LEVEL_01_027B50.c: true when a status query (kind 0x1B, mask 0xFF) reports at least 5 twice and then at least 4. */
extern unsigned int func_0258B8(int kind, int mask);

int func_026100(void)
{
    if (func_0258B8(0x1B, 0xFF) >= 5) {
        if (func_0258B8(0x1B, 0xFF) >= 5) {
            if (func_0258B8(0x1B, 0xFF) >= 4)
                return 1;
        }
    }
    return 0;
}
