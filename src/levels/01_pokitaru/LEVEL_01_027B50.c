/* LEVEL_01:0x027B50 -- true when a status query (kind 0x1B, mask 0xFF) reports at least 5 twice and then at least 4. */
extern unsigned int func_027408(int kind, int mask);

int func_027B50(void)
{
    if (func_027408(0x1B, 0xFF) >= 5) {
        if (func_027408(0x1B, 0xFF) >= 5) {
            if (func_027408(0x1B, 0xFF) >= 4)
                return 1;
        }
    }
    return 0;
}
