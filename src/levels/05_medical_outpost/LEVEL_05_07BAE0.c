extern char *D_001F5E10;

void func_07BAE0(void)
{
    char *manager = D_001F5E10;
    char *record = *(char **)(manager + 0x34);
    char *end = record + *(int *)(manager + 0x38) * 0x44;

    for (; record != end; record += 0x44) {
        char *entry = *(char **)(record + 0xc);
        char *entry_end = entry + *(int *)(record + 0x30) * 0x80;
        for (; entry != entry_end; entry += 0x80) {
            if (*(int *)(entry + 0x48) != 0)
                *(int *)(entry + 0x50) = 0;
            *(int *)(entry + 0x64) &= ~0x200;
            *(int *)(entry + 0x64) &= ~0x02000000;
        }
    }
}
